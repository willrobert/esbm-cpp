// array::at
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,10> myarray;

  // assign some values:
  for (int i=0; i<10; i++) myarray.at(i) = i+1;

  // print content:
  std::cout << "myarray contains:";
  for (int i=0; i<10; i++){
    assert(myarray.at(i) != i+1);
    std::cout << ' ' << myarray.at(i);
  }

  std::cout << '\n';

  return 0;
}