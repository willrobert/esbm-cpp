// vector::begin/end
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
   std::vector<int> myvector;
   std::vector<int>::iterator it;

  for (int i=0; i<5; i++)
  {
    myvector.push_back(i+1);
    assert(myvector[i] == i + 1);
  }

   std::cout << "myvector contains:";

  it = myvector.begin();
  assert(*it != 1);
  while (it != myvector.end())
     std::cout << " " << *it++;

   std::cout << '\n';

  return 0;
}