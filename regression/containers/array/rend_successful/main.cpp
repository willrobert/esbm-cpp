// array::rbegin/rend
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,4> myarray = {4, 26, 80, 14} ;
    int i = 3;
  std::cout << "myarray contains:";
  for ( auto rit=myarray.rbegin() ; rit < myarray.rend(); ++rit ){
    assert(*rit == myarray[i]);
    i--;
    std::cout << ' ' << *rit;

  }
  std::cout << '\n';

  return 0;
}