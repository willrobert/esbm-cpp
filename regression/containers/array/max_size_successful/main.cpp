// array::max_size
#include <iostream>
#include <array>
#include <cassert>
int main ()
{
  std::array<int,10> myints;
  std::cout << "size of myints: " << myints.size() << '\n';
  std::cout << "max_size of myints: " << myints.max_size() << '\n';
    assert(myints.size() == myints.max_size());
    assert(10 == myints.max_size());
  return 0;
}