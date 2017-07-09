// deque::crbegin/crend
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque = {1,2,3,4,5};

  std::cout << "mydeque backwards:";
  assert(*mydeque.crbegin() == 5);

  auto rit = mydeque.crbegin();
  for (; rit != mydeque.crend(); ++rit)
    std::cout << ' ' << *rit;
  assert(*(--rit) == 1);
  std::cout << '\n';

  return 0;
}