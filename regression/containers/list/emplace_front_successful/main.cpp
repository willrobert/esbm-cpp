// list::emplace_front
#include <iostream>
#include <list>
#include <cassert>

int main ()
{
  std::list<int>  mylist;

  mylist.emplace_front(10);
  mylist.emplace_front(20);
  mylist.emplace_front(30);

  assert(*mylist.begin() == 30);
  std::cout << "mylist contains:";
  for (auto& x: mylist)
    std::cout << " (" << x <<")";

  std::cout << std::endl;
  return 0;
}
