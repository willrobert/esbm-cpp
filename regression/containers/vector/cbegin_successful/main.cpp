// vector::cbegin/cend
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector = {10,20,30,40,50};

  std::cout << "myvector contains:";
    int i = 0;
  for ( auto it = myvector.cbegin(); it != myvector.cend(); ++it ){
    assert(myvector[i]==*it);
    i++;
    std::cout << ' ' << *it;
  }

  std::cout << '\n';

  return 0;
}