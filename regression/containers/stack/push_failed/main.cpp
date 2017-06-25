// stack::push/pop
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <cassert>        // std::cassert
int main ()
{
  std::stack<int> mystack;

  for (int i=0; i<5; ++i){
    mystack.push(i);
    assert(mystack.top() != i);
  }

  std::cout << "Popping out elements...";
  while (!mystack.empty())
  {
     std::cout << ' ' << mystack.top();
     mystack.pop();
  }
  std::cout << '\n';

  return 0;
}
