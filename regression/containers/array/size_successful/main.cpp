// array::size
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,5> myints;

  assert(myints.size() == 5);
  std::cout << "size of myints: " << myints.size() << std::endl;
  std::cout << "sizeof(myints): " << sizeof(myints) << std::endl;

  return 0;
}
