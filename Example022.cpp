// Example021.cpp
// Write a C++ program to read / write a file with float number.
// https://www.tutorialride.com/cpp-file-management/c-program-to-add-read-contents-of-file.htm
/*

ofstream ios::out
ifstream ios::in
fstream  ios::in | ios::out

*/



#include <iostream>
#include <math.h>
#include <cstdlib>

#include <fstream>

using namespace std;
 

int main(int argc, char const *argv[]) {

    ifstream source;                    // build a read-Stream

    source.open("ftext.txt", ios_base::in);  // open data

    if (!source)  {                     // if it does not work
        cerr << "Can't open Data!\n";
    }
    else {                              // if it worked 
        char c;
    cout << "Se pudió ..." << endl;

 string shapeName;
 source >> shapeName;

 if (shapeName[0] == 't') {
    float fa,fb,fc;
    source >> fa;
    source >> fb;
    source >> fc;

    cout << fa, fb, fc;

}


}
        return 0;

}