// Example008.cpp

#include <iostream>

using namespace std;

/*

'argc' stands for argument count and 'argv' stands for 
argument values. 
These are variables passed to the main function when 
it starts executing. 
When we run a program we can give arguments to that 
program like −.

use: $ ./Example008.x Hello People and anybody

*/

int main(int argc, char const *argv[])
{
	/* code */

	cout << "This program has " << argc << " arguments:" << endl;

	for (int i = 0; i < argc; ++i){
		cout << argv[i] << endl;

	}


	return 0;
}