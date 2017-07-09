// deque::emplace_from
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque = {10,20,30};

  mydeque.emplace_front (111);
  assert(*(mydeque.begin())!= 111);
  mydeque.emplace_front (222);
  assert(*(mydeque.begin())!= 222);
  std::cout << "mydeque contains:";
  for (auto& x: mydeque)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
