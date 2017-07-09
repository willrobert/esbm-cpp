//size
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <cassert>        // std::cassert

int main ()
{
  std::stack<int> myints;
  std::cout << "0. size: " << myints.size() << '\n';
  assert(myints.size() == 0);
  for (int i=0; i<5; i++) myints.push(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.pop();
  assert(myints.size() == 4);
  std::cout << "2. size: " << myints.size() << '\n';

  return 0;
}
