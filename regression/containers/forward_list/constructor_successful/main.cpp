// forward_list constructors
#include <iostream>
#include <forward_list>
#include <cassert>

int main ()
{
  // constructors used in the same order as described above:

  std::forward_list<int> first;                      // default: empty
  assert(first.empty());
  std::forward_list<int> second (3,77);              // fill: 3 seventy-sevens
  for (int& x: second)
    assert(x == 77);
  std::forward_list<int> third (second.begin(), second.end()); // range initialization
  for (int& x: third)
    assert(x == 77);
  std::forward_list<int> fourth (third);            // copy constructor
  std::forward_list<int> fifth (std::move(fourth));  // move ctor. (fourth wasted)
   for (int& x: fifth)
    assert(x == 77);
  std::forward_list<int> sixth = {3, 52, 25, 90};    // initializer_list constructor
  int myvector[4] = {3, 52, 25, 90};
  int i = 0;
  for (int& x: sixth){
     assert(x == myvector[i]);
     i++;
  }


  std::cout << "first:" ; for (int& x: first)  std::cout << " " << x; std::cout << '\n';
  std::cout << "second:"; for (int& x: second) std::cout << " " << x; std::cout << '\n';
  std::cout << "third:";  for (int& x: third)  std::cout << " " << x; std::cout << '\n';
  std::cout << "fourth:"; for (int& x: fourth) std::cout << " " << x; std::cout << '\n';
  std::cout << "fifth:";  for (int& x: fifth)  std::cout << " " << x; std::cout << '\n';
  std::cout << "sixth:";  for (int& x: sixth)  std::cout << " " << x; std::cout << '\n';

  return 0;
}
