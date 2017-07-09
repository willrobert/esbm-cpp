// vector::front
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;

  myvector.push_back(78);
  assert(myvector.front() == 78);
  myvector.push_back(16);
  assert(myvector.front() == 78);
  // now front equals 78, and back 16

  myvector.front() -= myvector.back();
  assert(myvector.front() != (78-16));

  std::cout << "myvector.front() is now " << myvector.front() << '\n';

  return 0;
}