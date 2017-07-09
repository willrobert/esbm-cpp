// vector assignment
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> foo (3,0);
  std::vector<int> bar (5,0);

  bar = foo;

  assert(bar.size() == 3);
  foo = std::vector<int>();
  assert(foo.size() == 0);
  std::cout << "Size of foo: " << int(foo.size()) << '\n';
  std::cout << "Size of bar: " << int(bar.size()) << '\n';
  return 0;
}