// deque::begin
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
   std::deque<int> mydeque;
   std::deque<int>::iterator it;

  for (int i=0; i<5; i++)
  {
  	mydeque.push_back(i+1);
  	assert(mydeque[i] == i + 1);
  }

   std::cout << "mydeque contains:";

  it = mydeque.begin();
  assert(*it == 1);
  while (it != mydeque.end())
     std::cout << " " << *it++;

   std::cout << '\n';

  return 0;
}