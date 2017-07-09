// vector::crbegin/crend
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector = {1,2,3,4,5};

  std::cout << "myvector backwards:";
  assert(*myvector.crbegin() == 5);

  auto rit = myvector.crbegin();
  for (; rit != myvector.crend(); ++rit)
    std::cout << ' ' << *rit;
  assert(*(--rit) == 1);
  std::cout << '\n';

  return 0;
}