#include <iostream>
#include <vector>
using namespace std;

/**
 * Random Access Iterators allow the operations of pointer arithmetic:
 * addition of arbitrary offsets, subscripting, and subtraction of one
 * iterator from another to find a distance.  These are the most
 * powerful iterators and are like regular pointers but they are also
 * smart, e.g., they can hold state.
 *
 * In addition doing all that bidirectional iterators do, random
 * access iterators can do the following as well:
 * . operator+ (int) 
 * . operator+= (int) 
 * . operator- (int) 
 * . operator-= (int) 
 * . operator- (random access iterator) 
 * . operator[] (int) 
 * . operator < (random access iterator) 
 * . operator > (random access iterator) 
 * . operator >= (random access iterator) 
 * . operator <= (random access iterator) 
 *
 * The vector class provides a random access iterator that can be used
 * as follows:
 */
int main() {
  vector<int> v({0, 1, 2, 3, 4, 5, 6, 7, 8, 9});
  int total_even = 0;
   
  for (auto iter = v.begin();
       iter != v.end();
       iter += 2) 
    total_even += *iter;

  cout << "Total even = " << total_even << endl;
  return 0;
}



