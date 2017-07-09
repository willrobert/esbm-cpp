// set::cbegin/cend
#include <iostream>
#include <set>
#include <vector>
#include <cassert>

int main ()
{
  std::set<int> myset = {5,10,15,20};
  std::vector<int> myvector = {5,10,15,20};
  int i = 0;

  std::cout << "myset contains:";


  for (auto it = myset.cbegin(); it != myset.cend(); ++it){
    assert(*it == myvector[i]);
    i++;
    std::cout << ' ' << *it;
  }

  std::cout << '\n';

  return 0;
}
