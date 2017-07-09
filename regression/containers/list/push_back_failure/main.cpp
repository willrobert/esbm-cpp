// list::push_back
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;
  //int myint;

  for(int i =0 ; i < 10; i++){
    mylist.push_back (i);
  }

  assert(mylist.back() != 9);

  cout << "mylist stores " << (int) mylist.size() << " numbers.\n";

  return 0;
}
