// array::fill example
#include <iostream>
#include <array>
#include <cassert>

int main () {
  std::array<int,6> myarray;

  myarray.fill(5);

  std::cout << "myarray contains:";
  for ( int& x : myarray) {
       assert(x != 5);
    std::cout << ' ' << x; }

  std::cout << '\n';

  return 0;
}