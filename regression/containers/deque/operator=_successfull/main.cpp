// assignment operator with deques
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> first (3);    // deque with 3 zero-initialized ints
  std::deque<int> second (5);   // deque with 5 zero-initialized ints

   assert(first[0] == 0);
  assert(second[4] == 0);

  second = first;
  assert(second == first);
  first = std::deque<int>();

   assert(first.size() == 0);
  std::cout << "Size of first: " << int (first.size()) << '\n';
  std::cout << "Size of second: " << int (second.size()) << '\n';
  return 0;
}