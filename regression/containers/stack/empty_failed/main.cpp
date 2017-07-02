<<<<<<< HEAD
// stack::empty
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <cassert>
int main ()
{
  std::stack<int> mystack;
  int sum (0);

  for (int i=1;i<=10;i++) mystack.push(i);

  while (!mystack.empty())
  {
     sum += mystack.top();
     mystack.pop();
  }
assert(!mystack.empty());
  std::cout << "total: " << sum << '\n';

  return 0;
}
=======
// stack::empty
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <cassert>
int main ()
{
  std::stack<int> mystack;
  int sum (0);

  for (int i=1;i<=10;i++) mystack.push(i);

  while (!mystack.empty())
  {
     sum += mystack.top();
     mystack.pop();
  }
assert(!mystack.empty());
  std::cout << "total: " << sum << '\n';

  return 0;
}
>>>>>>> 323e7fea6048970a9e493a9b9a6c9552bcdd014b
