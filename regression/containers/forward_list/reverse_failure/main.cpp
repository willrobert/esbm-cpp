// reversing forward_list
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int> mylist = {10, 20, 30, 40};
  int myvector[4] = {40, 30, 20, 10};
  int i =0;
  mylist.reverse();

  for (int& x: mylist){
    assert(x != myvector[i]);
    i++;
  }

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
