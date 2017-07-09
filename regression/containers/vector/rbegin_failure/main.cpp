// vector::rbegin/rend
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector;
  std::vector<int>::reverse_iterator rit;

  for (int i=1; i<=5; i++) myvector.push_back(i);
  std::cout << "myvector contains:";

  rit = myvector.rbegin();
  assert(*rit != 5);
  int n = 5;
  while ( rit < myvector.rend() )
  {
    std::cout << " " << *rit;
    assert(*rit != n);
    ++rit;
    n--;
  }

   std::cout << '\n';

  return 0;
}