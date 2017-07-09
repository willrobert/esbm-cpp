// forward_list::max_size
#include <iostream>
#include <sstream>
#include <forward_list>
#include <cassert>

int main ()
{
  int myint = 10;
  std::string mystring;
  std::forward_list<int> mylist;

  //std::cout << "Enter size: ";
  //std::getline ( std::cin, mystring );
  //std::stringstream ( mystring ) >> myint;
  assert(myint <= mylist.max_size());

  if ( myint <= mylist.max_size() ) mylist.resize(myint);
  else std::cout << "That size exceeds the maximum.\n";

  myint = 100000000000;
  assert(myint > mylist.max_size());

  return 0;
}
