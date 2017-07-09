// list::cbegin/cend
#include <iostream>
#include <list>
#include <vector>
#include <cassert>

int main ()
{
  std::list<int> mylist = {5,10,15,20};
  std::vector<int> myvector = {5,10,15,20};
  int i = 0;

  std::cout << "mylist contains:";


  for (auto it = mylist.cbegin(); it != mylist.cend(); ++it){
    assert(*it == myvector[i]);
    i++;
    std::cout << ' ' << *it;
  }

  std::cout << '\n';

  return 0;
}
