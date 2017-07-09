// vector::at
#include <iostream>
#include <vector>
#include <cassert>


int main ()
{
  std::vector<int> myvector (10);   // 10 zero-initialized ints
  unsigned int i;

  // assign some values:
  for (i=0; i<myvector.size(); i++)
    myvector.at(i)=i;

  std::cout << "myvector contains:";
  for (i=0; i<myvector.size(); i++){
    assert(myvector.at(i) == i);
    std::cout << ' ' << myvector.at(i);
  }


  std::cout << '\n';

  return 0;
}