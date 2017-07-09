// forward_list::get_allocator
#include <cassert>
#include <forward_list>

int main()
{
  std::allocator<int> alloc;
  std::forward_list<int> v(alloc);

  std::allocator<int> result = v.get_allocator();

  assert(result != alloc);
}
