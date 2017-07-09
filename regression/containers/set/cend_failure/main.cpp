// set::cbegin/cend
#include <iostream>
#include <set>
#include <cassert>

int main ()
{
  std::set<int> myset = {5,10,15,20};

  std::cout << "myset contains:";

  for (auto it = myset.cbegin(); it != myset.cend(); ++it)
    std::cout << ' ' << *it;

  assert (*(--myset.cend())!= 20);
  std::cout << '\n';

  return 0;
}
