// Example020.cpp
// Write a program to copy the contents of one text file to another while changing the case of every alphabet.

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

     ifstream fin;

     fin.open("SECOND.TXT");
     
     ofstream fout;
     
     fout.open("THIRD.TXT");
     
     char ch;
     while(!fin.eof())
     {
          fin.get(ch);

          if(ch >= 97 && ch <= 122)
          {
               ch = toupper(ch);
          }
          else if(ch >= 65 && ch<= 90)
          {
               ch = tolower(ch);
          }
          fout<<ch;
     }
     cout<<"\n Data has been copied";

     fin.close();
     
     fout.close();
     
     return 0;


}