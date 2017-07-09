// deque::front
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque;

  mydeque.push_front(77);
  assert(mydeque.front() == 77);
  mydeque.push_back(20);

  mydeque.front() -= mydeque.back();
 assert(mydeque.front() == 57);
  std::cout << "mydeque.front() is now " << mydeque.front() << '\n';

  return 0;
}