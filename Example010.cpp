// Example010
/*

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded

*/

#include <iostream>

using namespace std;


template <typename T>
T myMax(T x, T y)
{
   return (x > y)? x: y;
}


int main(int argc, char const *argv[])
{
	/* code */

   int result = myMax<int>(3, 7);

 cout << myMax<int>(3, 7) << endl;  // Call myMax for int
  cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
  cout << myMax<char>('g', 'e') << endl;   // call myMax for char
	return 0;
}
