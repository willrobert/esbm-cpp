// forward_list::cbegin/cend
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int> mylist = {5,10,15,20};

  std::cout << "mylist contains:";

  for (auto it = mylist.cbegin(); it != mylist.cend(); ++it)
    std::cout << ' ' << *it;

  for (auto it = mylist.cbegin(); it != mylist.cend(); ++it)
    if(++it == mylist.cend())
        assert (*(++it)== 20);

  std::cout << '\n';

  return 0;
}
