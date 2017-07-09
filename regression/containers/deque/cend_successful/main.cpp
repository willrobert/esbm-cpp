// deque::cbegin/cend
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque = {10,20,30,40,50};

  std::cout << "mydeque contains:";

  for (auto it = mydeque.cbegin(); it != mydeque.cend(); ++it)
    std::cout << ' ' << *it;

  assert(*(--mydeque.cend())== 50);
  std::cout << '\n';

  return 0;
}