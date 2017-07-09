// forward_list::sort
#include <iostream>
#include <forward_list>
#include <functional>
#include <cassert>

int main ()
{
  std::forward_list<int> mylist = {22, 13, 5, 40, 90, 62, 31};

  mylist.sort();
  int newBegin = *mylist.begin() ;
  assert(newBegin == 22);
  std::cout << "default sort (operator<):";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  mylist.sort(std::greater<int>());
  int oldBegin = newBegin;
  newBegin = *mylist.begin() ;
  assert(newBegin == oldBegin);
  std::cout << "sort with std::greater():";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
