// set::emplace_hint
#include <iostream>
#include <set>
#include <string>
#include <cassert>

int main ()
{
  std::set<std::string> myset;
  auto it = myset.cbegin();

  myset.emplace_hint (it,"alpha");
  it = myset.emplace_hint (myset.cend(),"omega");
  it = myset.emplace_hint (it,"epsilon");
  it = myset.emplace_hint (it,"beta");

  it = myset.emplace_hint (myset.begin(),"alpha");
  assert(myset.size() != 4);

  std::cout << "myset contains:";
  for (const std::string& x: myset)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
