//Example016.cpp
//Usign random number

/*



*/



#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
 
int main () {
   int i, rnd;
 
   // set the seed
   srand( (unsigned)time( NULL ) );

   /* generate 10  random numbers. */
   for( i = 0; i < 10; i++ ) {
      // generate actual random number
      rnd = rand();
      cout <<" Random Number : " << rnd << endl;
   }

   return 0;
}