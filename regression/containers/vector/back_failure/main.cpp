// vector::back
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;

  myvector.push_back(10);
  assert(myvector.back() == 10);
  while (myvector.back() != 0)
  {
    myvector.push_back ( myvector.back() -1 );
  }
  assert(myvector.back() != 0);

  std::cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size() ; i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  return 0;
}