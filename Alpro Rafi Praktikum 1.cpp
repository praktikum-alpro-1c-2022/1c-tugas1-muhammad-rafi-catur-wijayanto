#include <iostream>
using namespace std;
int main(){
    string npm = "2210631170086";
    string namalengkap = "Muhammad Rafi Catur Wijayanto";
    int umur = 18;
    string kelas = "1C Informatika";
    string hobi = "sports";
    string cita = "sukses";
    cout << "NPM            :" << npm<< endl;
    cout << "Nama Lengkap   :" << namalengkap << endl;
    cout << "Umur           :" << umur << endl;
    cout << "Kelas          :" << kelas << endl;
    cout << "Hobi           :" << hobi << endl;
    cout << "Cita           :" << cita << endl;



 //  Tugas 2
    //  Menukarkan 2 Variabel dengan bantuan Variabel Sementara
    int a = 10; //Variabel awal
    int b = 7; //Variabel awal

    int c = a; // Variabel c ditukar dengan Variabel a yang bernilai 5
    a = b; // Variabel a ditukar dengan Variabel b yang bernilai 10
    b = c; // Variabel b ditukar dengan Variabel c yang bernilai 5

    cout << "Menukarkan 2 Variabel dengan bantuan Variabel Sementara\n";
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;


//Tidak menggunakan variabel sementara
    int a1 = 8;
    int b1 = 6;

    a1 = a1 - b1;
    b1 = a1 + b1;
    a1 = b1 - a1;

    cout << "Tidak menggunakan variabel sementara" << endl;
    cout << "Hasil a = " << a1 << endl;
    cout << "Hasil b = " << b1 << endl;
return 0;
}
