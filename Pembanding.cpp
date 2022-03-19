#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Masukkan angka 1 : ";
    cin >> a;
    cout << "\nMasukkan angka 2 : ";
    cin >> b;
    if (a>b){
        cout << a <<" lebih dari " << b;
    }
    else{
        cout << a <<" kurang dari " << b;
    }
}
