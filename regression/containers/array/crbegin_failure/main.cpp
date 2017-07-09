// array::crbegin/crend
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,6> myarray = {10, 20, 30, 40, 50, 60} ;

  std::cout << "myarray backwards:";
  auto rit=myarray.crbegin();
  assert(*rit == myarray[5]);
  for (  ; rit < myarray.crend(); ++rit )
    std::cout << ' ' << *rit;   // cannot modify *rit

    --rit;
   assert(*rit != myarray[0]);
  std::cout << '\n';

  return 0;
}