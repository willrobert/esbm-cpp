
// deque::operator[]
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  std::deque<int> mydeque (10);   // 10 zero-initialized elements
  std::deque<int>::size_type sz = mydeque.size();
  unsigned int i;

  // assign some values:
  for (i=0; i<sz; i++) mydeque[i]=i;

  // reverse order of elements using operator[]:
  for (i=0; i<sz/2; i++)
  {
    int temp;
    temp = mydeque[sz-1-i];
    mydeque[sz-1-i]=mydeque[i];
    mydeque[i]=temp;
  }

  std::cout << "mydeque contains:";
  for (i=0; i<sz; i++){
    assert(mydeque[i] != 9-i);
    std::cout << ' ' << mydeque[i];
  }
 std::cout << '\n';

  return 0;
}