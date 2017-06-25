// priority_queue::empty
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <cassert>        // std::cassert
int main ()
{
  std::priority_queue<int> mypq;
  int sum (0);

  for (int i=1;i<=10;i++) mypq.push(i);

  while (!mypq.empty())
  {
     sum += mypq.top();
     mypq.pop();
  }
  assert(mypq.empty());
  std::cout << "total: " << sum << '\n';

  return 0;
}