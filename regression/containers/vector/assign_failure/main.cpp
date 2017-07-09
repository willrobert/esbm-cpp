// vector assign
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> first;
  std::vector<int> second;
  std::vector<int> third;

  first.assign (7,100);             // 7 ints with a value of 100
  assert(first.size() == 7);
  assert(first[6] != 100);

  std::vector<int>::iterator it;
  it=first.begin()+1;

  second.assign (it,first.end()-1); // the 5 central values of first
  assert(second.size() == 5);
  assert(second[4] != 100);

  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);   // assigning from array.
  assert(third.size() == 3);
  assert(third[2] != 4);

  std::cout << "Size of first: " << int (first.size()) << '\n';
  std::cout << "Size of second: " << int (second.size()) << '\n';
  std::cout << "Size of third: " << int (third.size()) << '\n';
  return 0;
}