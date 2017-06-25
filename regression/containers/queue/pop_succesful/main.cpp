// queue::pop
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <cassert>         // std::cassert

int main ()
{
  std::queue<int> myqueue;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

   int i;
for(i = 0;i < 5;i++)
    myqueue.push(i);

  std::cout << "myqueue contains: ";
  int n;
  while (!myqueue.empty())
  {
    n = myqueue.size();
    std::cout << ' ' << myqueue.front();
    myqueue.pop();
    assert(n - 1 == myqueue.size());
  }
  assert(myqueue.empty());
  std::cout << '\n';

  return 0;
}