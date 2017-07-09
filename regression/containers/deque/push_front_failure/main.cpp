//push_front
#include <iostream>
#include <deque>
#include <cassert>

int main()
{
    // Create a deque containing integers
    std::deque<int> d = {7, 5, 16, 8};

    // Add an integer to the beginning and end of the deque
    d.push_front(13);
    assert(*d.begin()!=13);
    // Iterate and print values of deque
    for(int n : d) {
        std::cout << n << '\n';
    }
}