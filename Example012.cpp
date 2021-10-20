// Example012
/*

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded

*/

#include <iostream>

using namespace std;

int myMax(int x, int y)
{
   return (x > y)? x: y;
}

float myMax(float x, float y)
{
   return (x > y)? x: y;
}

double myMax(double x, double y)
{
   return (x > y)? x: y;
}


int main(int argc, char const *argv[])
{
	/* code */

  cout << myMax(3, 7) << endl;  // Call myMax for int
  cout << myMax(3.0, 7.0) << endl; // call myMax for double
  cout << myMax(3.00000, 7.0000) << endl;   // call myMax for char
	return 0;
}
