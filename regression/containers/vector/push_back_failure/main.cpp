// vector::push_back
#include <iostream>
#include <vector>

#include <cassert>
using namespace std;

int main ()
{
  vector<int> myvector;
  int myint;

/*  cout << "Please enter some integers (enter 0 to end):\n"; */
  int n = 10;

  do {
    myint = --n;
    myvector.push_back (myint);
  } while (myint);
  assert(myvector.back() != 0);
  assert(myvector.size() != 10);
  cout << "mydeque stores " << (int) myvector.size() << " numbers.\n";

  return 0;
}