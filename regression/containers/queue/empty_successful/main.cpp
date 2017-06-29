// queue::empty
#include <iostream>       // std::cout
#include <queue>          // std::queue
#include <cassert>        // std::cassert

int main ()
{
  std::queue<int> myqueue;
  int sum (0);

  for (int i=1;i<=10;i++) myqueue.push(i);

  while (!myqueue.empty())
  {
     sum += myqueue.front();
     myqueue.pop();
  }
  assert(myqueue.empty());
  std::cout << "total: " << sum << '\n';

  return 0;
}