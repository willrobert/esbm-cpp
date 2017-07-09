// resizing vector
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;
  std::vector<int>::iterator it;

  unsigned int i;

  // set some initial content:
  for (i=1;i<10;i++) myvector.push_back(i);

  assert(myvector.size() != 9);
  assert(myvector[0] == 1);

  myvector.resize(5);

  assert(myvector.size() != 5);

  myvector.resize(8,100);

  assert(myvector.size() != 8);
  assert(myvector[5] == 100);

  myvector.resize(12);

  assert(myvector.size() != 12);
  assert(myvector[10] == 0);

  std::cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); ++it)
    std::cout << " " << *it;

  std::cout << '\n';

  return 0;
}