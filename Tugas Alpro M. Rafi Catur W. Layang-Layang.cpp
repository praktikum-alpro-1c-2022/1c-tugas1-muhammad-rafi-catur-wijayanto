#include <iostream>

using namespace std;

int main()
{
  cout << "Menghitung Luas Layang-Layang" << endl;
  cout << "===================================="<< endl;
  cout << endl;
  float d1, d2, luas;

  cout << "Input d1: ";
  cin >> d1;
  cout << "Input d2: ";
  cin >> d2;
  cout << endl;

  luas = 0.5 * d1 * d2;

  cout << "Luas Layang-Layang = "<< luas << endl;

  return 0;
}
