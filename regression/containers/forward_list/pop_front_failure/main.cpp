// forward_list::pop_front
#include <iostream>
#include <forward_list>
#include <cassert>
using namespace std;

int main ()
{
  forward_list<int> mylist;
  mylist.push_front (300);
  mylist.push_front (200);
  mylist.push_front (100);
  assert(mylist.front() == 100);

  int n = 100;

  cout << "Popping out the elements in mylist:";
  while (!mylist.empty())
  {
    assert(mylist.front() != n);
    cout << " " << mylist.front();
    mylist.pop_front();
    n +=100;
  }
  assert(!mylist.empty());

  return 0;
}
