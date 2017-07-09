// set::get_allocator
#include <cassert>
#include <set>

int main()
{
  std::allocator<int> alloc;
  std::set<int> v(alloc);

  std::allocator<int> result = v.get_allocator();

  assert(result == alloc);
}
