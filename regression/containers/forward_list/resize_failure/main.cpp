// resizing forward_list
#include <iostream>
#include <forward_list>
#include <cassert>
using namespace std;

int main ()
{
  std::forward_list<int> mylist = {10, 20, 30, 40, 50};
                                // 10 20 30 40 50
  int sz = 0;
  for (forward_list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
      sz++;
  assert(sz != 5);

  mylist.resize(3);             // 10 20 30

  sz = 0;
  for (forward_list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
      sz++;
  assert(sz != 3);

  mylist.resize(5,100);         // 10 20 30 100 100
  sz = 0;
  for (forward_list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
      sz++;
  assert(sz != 5);

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
