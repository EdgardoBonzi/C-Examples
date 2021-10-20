// Example009

#include <iostream>

using namespace std;

int max(int num1, int num2);

int main(int argc, char const *argv[])
{
	/* code */

// local variable declaration
	int a = 10; int b = 15;
    cout << "El más grande es : " << max(a, b) << endl;

	return 0;
}

int max(int num1, int num2){
	int result = num1;
	if (num1 < num2) result = num2;
    return result;
}