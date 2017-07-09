// stack::push/pop
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <cassert>        // std::cassert
int main ()
{
  std::stack<int> mystack;

  for (int i=0; i<5; ++i) mystack.push(i);
  int n;
  std::cout << "Popping out elements...";
  while (!mystack.empty())
  {
      n = mystack.size();
     std::cout << ' ' << mystack.top();
     mystack.pop();
     assert(n - 1 == mystack.size());
  }
  assert(mystack.empty());
  std::cout << '\n';

  return 0;
}
