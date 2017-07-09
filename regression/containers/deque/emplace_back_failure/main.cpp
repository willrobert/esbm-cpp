// deque::emplace_from
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque = {10,20,30};

  mydeque.emplace_back (100);
  assert(*(--mydeque.end()) != 100);
  mydeque.emplace_back (200);
  assert(*(--mydeque.end()) != 200);

  std::cout << "mydeque contains:";
  for (auto& x: mydeque)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
