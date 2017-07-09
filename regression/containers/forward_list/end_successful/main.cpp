// forward_list::end
#include <iostream>
#include <forward_list>
#include <cassert>
using namespace std;

int main ()
{
  std::forward_list<int> mylist = { 10, 20, 30, 40 };
  int myvector[4] =  { 10, 20, 30, 40 };
  int i = 0;
  std::cout << "mylist contains:";
  for ( auto it = mylist.begin(); it != mylist.end(); ++it ){
    assert(*it == myvector[i]);
    i++;
    std::cout << ' ' << *it;
  }

  std::cout << '\n';

  return 0;
}
