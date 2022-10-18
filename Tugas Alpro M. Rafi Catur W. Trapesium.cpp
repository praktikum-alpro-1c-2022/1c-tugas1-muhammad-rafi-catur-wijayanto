#include <iostream>;

using namespace std;

int main()
{
  cout << "Menghitung Luas Trapesium" << endl;
  cout << "===================================="<< endl;
  cout << endl;
  float a, b, t, luas;

  cout << "Input a: ";
  cin >> a;
  cout << "Input b: ";
  cin >> b;
  cout << "Input tinggi: ";
  cin >> t;

  luas = 0.5 * (a+b) * t;

  cout << "Luas Trapesium, = "<< luas << endl;
  return 0;
}
