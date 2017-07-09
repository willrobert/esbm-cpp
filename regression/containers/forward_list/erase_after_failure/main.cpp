// erasing from forward_list
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int> mylist = {10, 20, 30, 40, 50};

                                            // 10 20 30 40 50
  auto it = mylist.begin();                 // ^
for (int& x: mylist) std::cout << ' ' << x;
std::cout << '\n';
assert(*(++mylist.begin()) == 20);

  it = mylist.erase_after(it);              // 10 30 40 50
  assert(*(++mylist.begin()) != 30);
for (int& x: mylist) std::cout << ' ' << x;
std::cout << '\n';                                //    ^
  it = mylist.erase_after(it,mylist.end()); // 10 30

  int listSize = 0;
  for ( auto it = mylist.begin(); it != mylist.end(); ++it ){
    listSize ++;
  }
  std::cout << "List Size: " << listSize << "\n";

  assert(listSize != 2);

for (int& x: mylist) std::cout << ' ' << x;

std::cout << '\n';                                            //       ^

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
