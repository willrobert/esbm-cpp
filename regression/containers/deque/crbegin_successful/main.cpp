// deque::crbegin/crend
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque = {1,2,3,4,5};

  std::cout << "mydeque backwards:";
  auto rit = mydeque.crbegin();
  assert(*rit == 5);
  for (; rit != mydeque.crend(); ++rit)
    std::cout << ' ' << *rit;
  std::cout << '\n';
    assert(*(--rit) == 1);
  return 0;
}