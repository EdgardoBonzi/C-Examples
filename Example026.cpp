// Example026.cpp
// Using Pointers



#include <iostream>

using namespace std;

int main () {
   int  var = 20;   // actual variable declaration.
   float fvar = 3.14159; // floar variable declaration
   
   int  *ip;        // pointer variable 
   float  *fp;	    // pointer to floar variable

   ip = &var;       // store address of var in pointer variable
   fp = &fvar;       // store address of var in pointer variable


   cout << "Value of var variable: ";
   cout << var << endl;
   
   cout << "Value of fvar variable: ";
   cout << fvar << endl;
   

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   cout << "Address stored in ip variable: ";
   cout << fp << endl;


   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   cout << "Value of *fp variable: ";
   cout << *fp << endl;


   return 0;
}
