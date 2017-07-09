// set::crbegin/crend
#include <iostream>
#include <set>
#include <cassert>

int main ()
{
  std::set<int> myset = {1,2,4,8,16};

  std::cout << "myset backwards:";
  for (auto rit = myset.crbegin(); rit != myset.crend(); ++rit)
    std::cout << ' ' << *rit;
  assert(*myset.crbegin() == 16);
  std::cout << '\n';

  return 0;
}
