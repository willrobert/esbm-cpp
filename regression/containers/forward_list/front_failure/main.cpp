// forward_list::front
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int> mylist = {2, 16, 77};

  mylist.front() = 11;
  assert(*mylist.begin() != 11);
  std::cout << "mylist now contains:";
  for ( int& x : mylist ) std::cout << ' ' << x;

  std::cout << '\n';

  return 0;
}
