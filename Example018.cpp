//Example018.cpp
//Write a C++ program to read text file and count number of characters in it.

/*



*/



#include <iostream>
#include<fstream>

using namespace std;
 
int main(int argc, char const *argv[]) {

    ifstream  fin("help_git.txt");
        char ch;
        int i, c = 0, sp = 0;
        while(fin)
        {
                fin.get(ch);
                i = ch;
                cout << i << endl;
                cout << ch << endl;
                if((i > 63 && i < 91) || (i > 96 && i < 123))
                        c++;
                else
                        if(ch== ' ')
                                sp++;
        }
        cout<<"\n No. of Characters in a File : "<<c;
        cout<<"\n Space between the Words     : "<<sp;
 
   return 0;
}