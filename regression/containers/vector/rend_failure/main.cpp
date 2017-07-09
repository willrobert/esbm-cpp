// vector::rbegin/rend
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;
  std::vector<int>::reverse_iterator rit;

  for (int i=1; i<=5; i++) myvector.push_back(i);

  std::cout << "myvector contains:";

  rit = myvector.rbegin();

  while ( rit < myvector.rend() )
  {
    std::cout << " " << *rit;
    ++rit;
  }
  assert(rit != myvector.rend());

  std::cout << '\n';

  return 0;
}