// Example014.cpp
// calling system command

/* 
simple c++ program in order to learn about how to call Linux command from C++ program (by using the system command)

*/ 

#include <iostream>

using namespace std;

// #include <stdio.h>
// #include <stdlib.h>


int main()
{ 
  system("echo -n '0. Clear the screen '; clear");
  system("echo -n '1. Current Directory is '; pwd");
  system("echo -n '2. Making the temp Directory '; mkdir temp");
  system("echo -n '3. Contents of this Directory is '; ls -lrt");
  system("\n");
  return 0;
}