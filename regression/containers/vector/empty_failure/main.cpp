// vector::empty
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;
  int sum (0);

  for (int i=1;i<=10;i++) myvector.push_back(i);

  while (!myvector.empty())
  {
     sum += myvector.back();
     myvector.pop_back();
  }
  assert(!myvector.empty());
  assert(myvector.size() != 0);
  std::cout << "total: " << sum << '\n';

  return 0;
}