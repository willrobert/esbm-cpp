// list::max_size
#include <iostream>
#include <list>
#include <cassert>

using namespace std;

int main ()
{
  unsigned int i=100;
  list<int> mylist;

  //cout << "Enter number of elements: ";
  //cin >> i;


  if (i<mylist.max_size()){
    mylist.resize(i);
    assert(mylist.size() != i);
  }
  else cout << "That size exceeds the limit.\n";

  return 0;
}