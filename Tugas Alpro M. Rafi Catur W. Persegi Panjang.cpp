#include <iostream>;

using namespace std;

int main()
{
  cout << "Menghitung Luas Persegi Panjang" << endl;
  cout << "===================================="<< endl;
  cout << endl;
  float p, l, luas;

  cout << "Input Panjang: ";
  cin >> p;
  cout << "Input Lebar: ";
  cin >> l;

  luas = p * l;

  cout << "Luas Lingkaran = "<< luas << endl;
  return 0;
}
