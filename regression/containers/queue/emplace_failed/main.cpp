// queue::emplace
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <string>         // std::string, std::getline(string)
#include <cassert> // std::cassert
int main ()
{
  std::queue<std::string> myqueue;

  myqueue.emplace ("First sentence");
  assert(myqueue.front().compare("First sentence") == 0);
  myqueue.emplace ("Second sentence");
  assert(myqueue.back().compare("Second sentence") != 0);
  std::cout << "myqueue contains:\n";
  while (!myqueue.empty())
  {
    std::cout << myqueue.front() << '\n';
    myqueue.pop();
  }

  return 0;
}