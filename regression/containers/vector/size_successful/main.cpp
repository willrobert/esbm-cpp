// vector::size
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myints;
  std::cout << "0. size: " << myints.size() << '\n';
  assert(myints.size() == 0);
  for (int i=0; i<5; i++) myints.push_back(i);
  std::cout << "1. size: " << myints.size() << '\n';
  assert(myints.size() == 5);
  myints.insert (myints.begin(),5,100);
  std::cout << "2. size: " << myints.size() << '\n';
  assert(myints.size() == 10);
  myints.pop_back();
  std::cout << "3. size: " << myints.size() << '\n';
  assert(myints.size() == 9);
  return 0;
}