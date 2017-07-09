// array::data
#include <iostream>
#include <cstring>
#include <array>
#include <cassert>

int main ()
{
  //const int* cstr = {1,2,4,8};
  std::array<int,5> myarray = { 2, 16, 77, 34, 50 };

  //std::memcpy (intarray.data(),cstr,5);

   int i = 0;
   for ( auto it = myarray.data(); it != myarray.end(); ++it ){
        assert(*it == myarray[i]);
   i++;
    std::cout << ' ' << *it;
   }
  return 0;
}