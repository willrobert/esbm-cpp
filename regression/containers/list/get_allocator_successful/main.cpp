// list::get_allocator
#include <cassert>
#include <list>

int main()
{
  std::allocator<int> alloc;
  std::list<int> v(alloc);

  std::allocator<int> result = v.get_allocator();

  assert(result == alloc);
}
