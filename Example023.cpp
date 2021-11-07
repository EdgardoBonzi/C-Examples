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
#include <string>

#include <fstream>

using namespace std;
 

int main(int argc, char const *argv[]) {

// vector notas;

ifstream fichNotas;

/*


source.open("ftext.txt", ios_base::in);  // open data

    if (!source)  {                     // if it does not work
        cerr << "Can't open Data!\n";
    }

*/
fichNotas.open("ftext.txt", ios::in);

if(!fichNotas)
{
  // No es posible abrir el fichero
        cout << "No es posible abrir el fichero" << endl;
        //break; // Se ha detectado un error o hemos leido todo el fichero - dejamos de leer
}
else
{
  
    float nota;
    float a, b, c;
    int ii = 0;
    string texto;


 
      while(!fichNotas.eof())
      {
        ii++; cout << ii <<'\t';

      //fichNotas >> a;
      //fichNotas >> b;
      //fichNotas >> c;

      getline(fichNotas, a, b, c);
      cout << a << " \t " << b <<" \t " << c << "\n";
      //cout << texto << endl;
      //cout << texto[0] << endl;;

      }

  }
       fichNotas.close();
        return 0;

}