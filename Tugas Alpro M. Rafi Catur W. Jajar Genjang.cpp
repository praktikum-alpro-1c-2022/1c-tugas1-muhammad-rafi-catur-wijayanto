#include <iostream>

using  namespace std;

int main ()
 {
     cout << "Menghitung Luas Jajar Genjang"<< endl;
     cout << "============================="<< endl;
     cout << endl;
     float a, t, luas;

     cout << "Input alas: ";
     cin  >> a;
     cout << "Input tinggi: ";
     cin  >> t;

     luas = a * t;

     cout << "Luas Jajar Genjang = " << luas << endl;

     return 0;
 }
