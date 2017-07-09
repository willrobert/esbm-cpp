// array::begin example
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,5> myarray = { 2, 16, 77, 34, 50 };
  int i = 0;

  std::cout << "myarray contains:";
  for ( auto it = myarray.begin(); it != myarray.end(); ++it ){
    assert(*it == myarray[i]);
    i++;
    std::cout << ' ' << *it;
  }

  std::cout << '\n';

  return 0;
}