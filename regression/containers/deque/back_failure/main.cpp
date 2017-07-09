// deque::back
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque;

  mydeque.push_back(10);
  int n = 10;
  while (mydeque.back() != 0){
      assert(mydeque.back() != n--);
    mydeque.push_back ( mydeque.back() -1 );

  }

  std::cout << "mydeque contains:";

  for (std::deque<int>::iterator it = mydeque.begin(); it!=mydeque.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}