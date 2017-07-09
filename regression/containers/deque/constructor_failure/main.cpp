// constructing deques
#include <iostream>
#include <deque>
#include <cassert>

int main ()
{
  unsigned int i;

  // constructors used in the same order as described above:
  std::deque<int> first;                                // empty deque of ints
  std::deque<int> second (4,100);                       // four ints with value 100
  std::deque<int> third (second.begin(),second.end());  // iterating through second
  std::deque<int> fourth (third);                       // a copy of third

  assert(fourth == third);
  assert(first.size() == 0);
  assert(second.size() == 4);
  assert(second[2] == 100);
  assert(third[0] == 100);

  // the iterator constructor can be used to copy arrays:
  int myints[] = {16,2,77,29};
  std::deque<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  std::cout << "The contents of fifth are:";
    for (i=0; i < fifth.size(); i++)
        assert(fifth[i] != myints[i]);

  std::cout << '\n';

  return 0;
}