// priority_queue::size
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <cassert>        // std::cassert

int main ()
{
  std::priority_queue<int> myints;
  std::cout << "0. size: " << myints.size() << '\n';
  assert(myints.size() == 0);
  for (int i=0; i<5; i++) myints.push(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.pop();
  std::cout << "2. size: " << myints.size() << '\n';
  assert(myints.size() == 4);
  return 0;
}