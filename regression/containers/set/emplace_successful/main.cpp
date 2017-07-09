// set::emplace
#include <iostream>
#include <set>
#include <string>
#include <cassert>

int main ()
{
  std::set<std::string> myset;

  myset.emplace("foo");
  assert(myset.size() == 1);
  myset.emplace("bar");
  assert(myset.size() == 2);
  auto ret = myset.emplace("foo");
  assert(myset.size() == 2);
  if (!ret.second) std::cout << "foo already exists in myset\n";

  return 0;
}
