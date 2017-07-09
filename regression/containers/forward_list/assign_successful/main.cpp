// forward_list::assign
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int> first;
  std::forward_list<int> second;

  first.assign (4,15);                           // 15 15 15 15
  for (int& x : first)
    assert(x == 15);

  second.assign (first.begin(),first.end());     // 15 15 15 15
  for (int& x : second)
    assert(x == 15);


  first.assign ( {77, 2, 16} );                  // 77 2 16
  assert(*first.begin() == 77);
  std::cout << "first contains: ";
  for (int& x : first) std::cout << ' ' << x;
  std::cout << '\n';

  std::cout << "second contains: ";
  for (int& x : second) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
