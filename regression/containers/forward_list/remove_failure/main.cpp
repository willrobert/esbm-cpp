// remove from forward_list
#include <iostream>
#include <forward_list>
#include <cassert>
using namespace std;

int main ()
{
  int myints[]= {17,89,7,14};
  forward_list<int> mylist (myints,myints+4);
  forward_list<int>::iterator it;

  mylist.remove(89);
  int sz = 0;
  for (forward_list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
      sz++;
  assert(sz != 3);
  it = mylist.begin(); it++;
  assert(*it != 7);

  cout << "mylist contains:";
  for (forward_list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
    cout << " " << *it;
  cout << endl;

  return 0;
}
