// vector::emplace
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  std::vector<int> myvector = {10,20,30};

  auto it = myvector.emplace ( myvector.begin()+1, 100 );
  assert(myvector.at(1) == 100);
  myvector.emplace ( it, 200 );
  assert(myvector.at(1) == 200);
  myvector.emplace ( myvector.end(), 300 );
  assert(*(--myvector.end()) == 300);


  std::cout << "mydeque contains:";
  for (auto& x: myvector)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}