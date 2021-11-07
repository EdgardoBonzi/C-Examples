//Example019.cpp
//Write a C++ program to open output file 'a.txt' and append data to it.
// https://www.tutorialride.com/cpp-file-management/c-program-to-add-read-contents-of-file.htm
/*

ofstream ios::out
ifstream ios::in
fstream  ios::in | ios::out

*/



#include <iostream>
#include <fstream>
#include <string>

using namespace std;
 
int main(int argc, char const *argv[]) {

    ofstream fout;  // Create Object of OfStream

    ifstream fin; // Create Object of InStream

    string  fname = "text.txt"; // File name

    // fin.open(fname);
    // fin.close();
                                             
    // fin.open (fname, ios::in);  // ios::in  Read mode if file exists
    // fout.open (fname, ios::out); // ios::out Write mode even if the file does not exist
    fout.open (fname, ios::app); // ios::app Append mode even if the file does not exist
    
    //if(fin.is_open())
    if(fout.is_open()){

        fout<< "\n Write to a file open from this program.\n"; // Writing data to file
        fout<< "\n Writing another string to the open file from this program.\n"; // Writing data to file     
     
    cout<<"\n Data has been append to the file.";
    
    // fin.close();
    
    fout.close(); // Closing the file
    }
    else
      cout << "The file is not open.\n";
    return 0;



}