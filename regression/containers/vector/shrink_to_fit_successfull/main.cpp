// vector::shrink_to_fit
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector (100);
  std::cout << "1. capacity of myvector: " << myvector.capacity() << '\n';

  myvector.resize(10);
  std::cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
  assert(myvector.capacity()==100);
  myvector.shrink_to_fit();
  assert(myvector.capacity()==10);
  std::cout << "3. capacity of myvector: " << myvector.capacity() << '\n';

  return 0;
}