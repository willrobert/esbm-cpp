// array::cbegin example
#include <iostream>
#include <array>
#include <cassert>

// array::cend example
#include <iostream>
#include <array>

int main ()
{
  std::array<int,5> myarray = { 15, 720, 801, 1002, 3502 };

  std::cout << "myarray contains:";
  auto it = myarray.cbegin();
  for ( ; it != myarray.cend(); ++it )
    std::cout << ' ' << *it;   // cannot modify *it
    --it;
    assert(myarray[4] == *it);
  std::cout << '\n';

  return 0;
}