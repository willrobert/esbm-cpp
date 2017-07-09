// clearing forward_list
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int> mylist = { 10, 20, 30 };

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  mylist.clear();
  assert(mylist.empty());
  mylist.insert_after( mylist.before_begin(), {100, 200} );
  assert(*mylist.begin()== 100);

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
