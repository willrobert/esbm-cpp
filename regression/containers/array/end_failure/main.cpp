// array::end example
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,5> myarray = { 5, 19, 77, 34, 99 };

  std::cout << "myarray contains:";
  auto it = myarray.begin();
  for ( ; it != myarray.end(); ++it )
    std::cout << ' ' << *it;
    --it;
    assert(*it != myarray[myarray.size() - 1]);
  std::cout << '\n';

  return 0;
}