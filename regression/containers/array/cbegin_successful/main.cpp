// array::cbegin example
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,5> myarray = { 2, 16, 77, 34, 50 };

  std::cout << "myarray contains:";
    int i = 0;
  for ( auto it = myarray.cbegin(); it != myarray.cend(); ++it ){
    assert(myarray[i]==*it);
    i++;
    std::cout << ' ' << *it;   
  }
  std::cout << '\n';

  return 0;
}