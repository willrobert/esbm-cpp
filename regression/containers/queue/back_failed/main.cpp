<<<<<<< HEAD
// queue::back
#include <iostream>       // std::cout
#include <queue>          // std::queue
#include <cassert> // std::cassert
int main ()
{
  std::queue<int> myqueue;

  myqueue.push(12);
  myqueue.push(75);   // this is now the back

  myqueue.back() -= myqueue.front();
  assert(myqueue.back()==!63);
  std::cout << "myqueue.back() is now " << myqueue.back() << '\n';

  return 0;
=======
// queue::back
#include <iostream>       // std::cout
#include <queue>          // std::queue
#include <cassert> // std::cassert
int main ()
{
  std::queue<int> myqueue;

  myqueue.push(12);
  myqueue.push(75);   // this is now the back

  myqueue.back() -= myqueue.front();
  assert(myqueue.back()==!63);
  std::cout << "myqueue.back() is now " << myqueue.back() << '\n';

  return 0;
>>>>>>> 323e7fea6048970a9e493a9b9a6c9552bcdd014b
}