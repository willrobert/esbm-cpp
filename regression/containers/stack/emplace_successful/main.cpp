// stack::emplace
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>         // std::string, std::getline(string)
#include <cassert>
int main ()
{
  std::stack<std::string> mystack;

  mystack.emplace ("First sentence");
  assert(mystack.top().compare("First sentence") == 0);
  mystack.emplace ("Second sentence");
  assert(mystack.top().compare("Second sentence") == 0);
  std::cout << "mystack contains:\n";
  while (!mystack.empty())
  {
    std::cout << mystack.top() << '\n';
    mystack.pop();
  }

  return 0;
}
