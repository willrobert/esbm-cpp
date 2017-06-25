// queue::push
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <cassert> // std::cassert
int main ()
{
  std::queue<int> myqueue;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

    int i;
  for(i = 0;i < 5;i++)
  	myqueue.push(i);


  std::cout << "myqueue contains: ";
  while (!myqueue.empty())
  {
    std::cout << ' ' << myqueue.front();
    assert(myqueue.front() == 5-i--);
    myqueue.pop();
  }
  std::cout << '\n';

  return 0;
}