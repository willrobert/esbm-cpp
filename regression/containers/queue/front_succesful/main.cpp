// queue::front
#include <iostream>       // std::cout
#include <queue>          // std::queue
#include <cassert> // std::cassert
int main ()
{
  std::queue<int> myqueue;

  myqueue.push(77);
  myqueue.push(16);
  assert(myqueue.front() == 77);
  myqueue.front() -= myqueue.back();    // 77-16=61
  assert(myqueue.front() == 61);
  std::cout << "myqueue.front() is now " << myqueue.front() << '\n';

  return 0;
}