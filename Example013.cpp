// Example013.cpp
// function template II

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
// defining a class

#include <iostream>

using namespace std;


template <class T>
T GetMax (T a, T b);

int main () {
  int i = 5, j = 6, k;

  long l = 10, m = 5, n;

  float x = 18.65, y = 53.987, z;

  char a = 'a', b = 'b', c;
  
  k = GetMax(i, j);
  
  n = GetMax(l, m);

  z = GetMax(x, y);
  
  c = GetMax(a, b);

  cout << k << endl;
  cout << n << endl;
  cout << z << endl;  
  cout << c << endl;  

  return 0;
}

template <class T>
T GetMax (T a, T b) {
  return (a > b? a: b);
}
