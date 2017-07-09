// vector::get_allocator
#include <cassert>
#include <vector>

int main()
{
  std::allocator<int> alloc;
  std::vector<int> v(alloc);

  std::allocator<int> result = v.get_allocator();

  assert(result != alloc);
}