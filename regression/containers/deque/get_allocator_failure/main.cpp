// array::get_allocator
#include <cassert>
#include <deque>

int main()
{
  std::allocator<int> alloc;
  std::deque<int> mydeque(alloc);

  std::allocator<int> result = mydeque.get_allocator();

  assert(result != alloc);
}