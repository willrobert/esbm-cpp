// list::cbegin/cend
#include <iostream>
#include <list>
#include <cassert>

int main ()
{
  std::list<int> mylist = {5,10,15,20};

  std::cout << "mylist contains:";

  for (auto it = mylist.cbegin(); it != mylist.cend(); ++it)
    std::cout << ' ' << *it;

  assert (*(--mylist.cend())== 20);
  std::cout << '\n';

  return 0;
}
