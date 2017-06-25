// priority_queue::pop
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <cassert>        // std::cassert

int main ()
{
  std::priority_queue<int> mypq;
  mypq.push(30);
  mypq.push(100);
  mypq.push(25);
  mypq.push(40);

  int i = 4;
  std::cout << "Popping out elements...";
  while (!mypq.empty())
  {
     assert(mypq.size() == i--);
     std::cout << ' ' << mypq.top();
     mypq.pop();
  }
  std::cout << '\n';

  return 0;
}