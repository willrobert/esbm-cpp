// forward_list::emplace_front
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int>  mylist;

  mylist.emplace_front(10);
  mylist.emplace_front(20);
  mylist.emplace_front(30);

  assert(*mylist.begin() != 30);
  std::cout << "mylist contains:";
  for (auto& x: mylist)
    std::cout << " (" << x <<")";

  std::cout << std::endl;
  return 0;
}
