// Example005

#include <iostream>

using namespace std;

// Function declaration
void func(void);
 
static int count = 10; /* Global variable */

int main(int argc, char const *argv[])
{
	/* code */
	system("clear");

   while(count--) {
     func();
 
 //   cout << "count :" << count << endl;

   }




	return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}