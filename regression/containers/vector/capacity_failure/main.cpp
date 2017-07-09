// comparing size, capacity and max_size
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;

  // set some content in the vector:
  for (int i=0; i<100; i++) myvector.push_back(i);

  std::cout << "size: " << (int) myvector.size() << '\n';
  assert(myvector.capacity() != 128);
  std::cout << "capacity: " << (int) myvector.capacity() << '\n';
  std::cout << "max_size: " << (int) myvector.max_size() << '\n';

  for (int i=100; i<130; i++) myvector.push_back(i);
  assert(myvector.capacity() != 256);
  std::cout << "size2: " << (int) myvector.size() << '\n';
  std::cout << "capacity 2: " << (int) myvector.capacity() << '\n';

  return 0;
}