// inserting into a vector
#include <iostream>
#include <vector>
#include <cassert>

int main ()
{
  std::vector<int> myvector (3,100);
  std::vector<int>::iterator it;

  it = myvector.begin();
  it = myvector.insert ( it , 200 );
  assert(myvector[0] == 200);
  myvector.insert (it,2,300);
  assert(myvector[0] == 300);
  // "it" no longer valid, get a new one:
  it = myvector.begin();

  std::vector<int> anothervector (2,400);
  myvector.insert (it+2,anothervector.begin(),anothervector.end());
  assert(myvector[2] == 400);

  int myarray [] = { 501,502,503 };
  myvector.insert (myvector.begin(), myarray, myarray+3);
  //assert(anothervector[0] = 300);
   assert(myvector[0] == 501);
   assert(myvector[1] == 502);
   assert(myvector[2] == 503);

  std::cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); it++)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}