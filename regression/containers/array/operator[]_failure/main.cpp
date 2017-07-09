// array::operator[]
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,10> myarray;
  unsigned int i;

  // assign some values:
  for (i=0; i<10; i++) myarray[i]=i;

  // print content
  std::cout << "myarray contains:";
  for (i=0; i<10; i++){
    assert(myarray[i] != i);
    std::cout << ' ' << myarray[i];
  }

  std::cout << '\n';

  return 0;
}