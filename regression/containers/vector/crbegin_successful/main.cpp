// vector::crbegin/crend
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector = {1,2,3,4,5};

  std::cout << "myvector backwards:";
  auto rit = myvector.crbegin();
  assert(*rit == 5);
  for (; rit != myvector.crend(); ++rit)
    std::cout << ' ' << *rit;
  std::cout << '\n';
    assert(*(--rit) == 1);
  return 0;
}
