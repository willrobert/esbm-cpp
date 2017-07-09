// vector::emplace
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  std::vector<int> myvector = {10,20,30};

  myvector.emplace_back (100);
  assert(*(--myvector.end()) == 100);
  myvector.emplace_back (200);
  assert(*(--myvector.end()) == 200);

  std::cout << "mydeque contains:";
  for (auto& x: myvector)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
