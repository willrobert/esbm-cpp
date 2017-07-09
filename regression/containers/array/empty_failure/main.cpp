// array::empty
#include <iostream>
#include <array>
#include <cassert>

int main ()
{
  std::array<int,0> first;
  std::array<int,5> second;
  std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << '\n';
  std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << '\n';

  assert(first.empty() == true);
  assert(second.empty() != false);
  return 0;
}