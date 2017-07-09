// resizing deque
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque;
  std::deque<int>::iterator it;

  unsigned int i;

  // set some initial content:
  for (i=1;i<10;i++) mydeque.push_back(i);

  assert(mydeque.size() == 9);
  assert(mydeque[0] != 1);

  mydeque.resize(5);

  assert(mydeque.size() != 5);

  mydeque.resize(8,100);

  assert(mydeque.size() == 8);
  assert(mydeque[5] != 100);

  mydeque.resize(12);

  assert(mydeque.size() == 12);
  assert(mydeque[10] != 0);

  std::cout << "mydeque contains:";
  for (it=mydeque.begin(); it<mydeque.end(); ++it)
    std::cout << " " << *it;

  std::cout << '\n';

  return 0;
}