// queue::swap
#include <iostream>       // std::cout
#include <queue>          // std::queue
#include <cassert>        // std::cassert

int main ()
{
  std::queue<int> foo,bar;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  foo.swap(bar);
  assert(foo.size()!=2 || bar.size()!=3);
  std::cout << "size of foo: " << foo.size() << '\n';
  std::cout << "size of bar: " << bar.size() << '\n';

  return 0;
}