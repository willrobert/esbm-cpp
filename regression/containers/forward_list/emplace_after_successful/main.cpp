// forward_list::emplace_after
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  std::forward_list<int> mylist;

  auto it = mylist.before_begin();

  it = mylist.emplace_after ( it, 100);
  it = mylist.emplace_after ( it, 200);
  it = mylist.emplace_after ( mylist.before_begin(), 300);

  assert(*mylist.begin() == 300);


  std::cout << "mylist contains:";
  for (auto& x: mylist)
    std::cout << " (" << x << ")";

  std::cout << '\n';
  return 0;
}
