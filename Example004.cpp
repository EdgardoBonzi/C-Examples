// Example004

# include <iostream>

using namespace std;

// Variable declaration
extern int a, b;
extern int c;
extern float f;

int main(int argc, char const *argv[])
{
	/* code */
	system("clear");

    int a, b;
    int c;
    float f;

// actual initialization
    a = 10;
    b = 20;
    c = a + b;
    cout << "c value is " << c << endl;

    f = (a + b)/7.0;

    cout << "f value is " << f << endl;
    

	return 0;
}