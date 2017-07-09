// vector::end
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector1;
  std::vector<int> myvector2;
  std::vector<int>::iterator it;

  for (int i=1; i<=5; i++) myvector1.insert(myvector1.end(),i);
  for (int i=1; i<=5; i++) myvector2.push_back(i);

  assert(myvector1 == myvector2);
  assert(*(--myvector1.end()) != 5);
  std::cout << "myvector contains:";

  it = myvector1.begin();
  assert(*it == 1);
  while (it != myvector1.end() )
    std::cout << " " << *it++;

  std::cout << '\n';

  return 0;
}
