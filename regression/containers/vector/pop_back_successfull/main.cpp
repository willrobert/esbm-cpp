// vector::pop_back
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;
  int sum (0);
  int myints[] = {100, 200};
  int i = 1;
  myvector.push_back (100);
  myvector.push_back (200);
  myvector.push_back (300);

  while (!myvector.empty())
  {
    sum+=myvector.back();
    myvector.pop_back();
    //assert(myvector.back() == myints[i]);
    i--;
  }

  assert(sum == 600);
  std::cout << "The elements of myvector add up to " << sum << '\n';

  return 0;
}