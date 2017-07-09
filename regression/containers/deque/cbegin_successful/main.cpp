// deque::cbegin/cend
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque = {10,20,30,40,50};

  std::cout << "mydeque contains:";
    int i = 0;
  for ( auto it = mydeque.cbegin(); it != mydeque.cend(); ++it ){
    assert(mydeque[i]==*it);
    i++;
    std::cout << ' ' << *it;
  }

  std::cout << '\n';

  return 0;
}