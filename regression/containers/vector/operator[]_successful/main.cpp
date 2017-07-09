// vector::operator[]
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector (10);   // 10 zero-initialized elements
  std::vector<int>::size_type sz = myvector.size();
  unsigned int i;

  // assign some values:
  for (i=0; i<sz; i++) myvector[i]=i;

  // reverse order of elements using operator[]:
  for (i=0; i<sz/2; i++)
  {
    int temp;
    temp = myvector[sz-1-i];
    myvector[sz-1-i]=myvector[i];
    myvector[i]=temp;
  }

  std::cout << "myvector contains:";
  for (i=0; i<sz; i++){
    assert(myvector[i] == 9-i);
    std::cout << ' ' << myvector[i];
  }
 std::cout << '\n';

  return 0;
}