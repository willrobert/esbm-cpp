// swap arrays
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,5> first = {10, 20, 30, 40, 50};
  std::array<int,5> second = {11, 22, 33, 44, 55};
  std::array<int,5> first_copy = {10, 20, 30, 40, 50};
  std::array<int,5> second_copy = {11, 22, 33, 44, 55};

  first.swap (second);
    int i = 0;
  std::cout << "first:";
  for (int& x : first){
    assert(x == second_copy[i]);
    i++;
   std::cout << ' ' << x;
  }
  std::cout << '\n';

  std::cout << "second:";

  i=0;
  for (int& x : second){
    assert(x == first_copy[i]);
    i++;
     std::cout << ' ' << x;
  }
  std::cout << '\n';

  return 0;
}