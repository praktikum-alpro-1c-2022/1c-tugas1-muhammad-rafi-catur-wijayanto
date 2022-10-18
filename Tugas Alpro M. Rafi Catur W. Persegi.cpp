#include <iostream>;

using namespace std;

int main()
{
  cout << "Menghitung Luas Persegi" << endl;
  cout << "===================================="<< endl;
  cout << endl;
  float s, luas;

  cout << "Input Sisi Persegi: ";
  cin >> s;

  luas = s * s;

  cout << "Luas Persegi = "<< luas << endl;

  return 0;
}
