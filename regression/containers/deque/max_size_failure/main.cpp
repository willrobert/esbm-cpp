#include <iostream>
#include <deque>
#include <cassert>

int main()
{
    std::deque<int> s;
    std::cout << "Maximum size of a 'deque' is " << s.max_size() << "\n";
    assert(s.max_size() !=1073741823);
}
