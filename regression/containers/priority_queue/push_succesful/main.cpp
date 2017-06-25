// priority_queue::push
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <cassert>        // std::cassert

int main ()
{
  std::priority_queue<int> mypq;
  int a1[4] = {100, 40, 30, 25};
  int i = 0;

  mypq.push(30);
  mypq.push(100);
  mypq.push(25);
  mypq.push(40);

  std::cout << "Popping out elements...";
  while (!mypq.empty())
  {
     std::cout << ' ' << mypq.top();
     assert(mypq.top() == a1[i++]);
     mypq.pop();
  }
  std::cout << '\n';

  return 0;
}
