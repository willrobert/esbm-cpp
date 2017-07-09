// deque::end
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque1;
  std::deque<int> mydeque2;
  std::deque<int>::iterator it;

  for (int i=1; i<=5; i++) mydeque1.insert(mydeque1.end(),i);
  for (int i=1; i<=5; i++) mydeque2.push_back(i);

  assert(mydeque1 == mydeque2);
  assert(*(mydeque1.end()) == 0);
  std::cout << "mydeque contains:";

  it = mydeque1.begin();
  assert(*it == 1);
  while (it != mydeque1.end() )
    std::cout << " " << *it++;

  std::cout << '\n';

  return 0;
}