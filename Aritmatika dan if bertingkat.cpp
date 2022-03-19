#include <iostream>
using namespace std;

int main()
{
    int a,b,pilih;
    double c;

    cout << "Masukkan angka 1 : ";
    cin >> a;
    cout << "\nMasukkan angka 2 : ";
    cin >> b;
    cout << "Pilih menu : \n1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\nPilih : ";
    cin >> pilih;
    if (pilih==1){
        c = a+b;
    }
    else if (pilih==2){
        c = a-b;
    }
    else if (pilih==3){
        c = a*b;
    }
    else if (pilih = 4){
        c = double(a)/double(b);
    }
    cout << "Hasil : " <<c;
    return 0;
}
