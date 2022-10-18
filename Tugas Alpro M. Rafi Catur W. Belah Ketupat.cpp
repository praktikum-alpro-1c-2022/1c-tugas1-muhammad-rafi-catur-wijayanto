#include <iostream>

using  namespace std;

int main ()
 {
     cout << "Menghitung Luas Belah Ketupat"<< endl;
     cout << "============================="<< endl;
     cout << endl;
     float d1, d2, luas;

     cout << "Input d1: ";
     cin  >> d1;
     cout << "Input d2: ";
     cin  >> d2;

     luas = 0.5 * d1 * d2;

     cout << "Luas Belah Ketupat = " << luas << endl;

     return 0;
 }
