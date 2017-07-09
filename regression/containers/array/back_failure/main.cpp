// array::back
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,3> myarray = {5, 19, 77};

  std::cout << "front is: " << myarray.front() << std::endl;   // 5
  std::cout << "back is: " << myarray.back() << std::endl;     // 77

  assert(myarray.back()==77);
  myarray.back() = 50;
    assert(myarray.back()!=50);
  std::cout << "myarray now contains:";
  for ( int& x : myarray ) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}