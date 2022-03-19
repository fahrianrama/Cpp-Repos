#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Masukkan jumlah uang : ";
    cin >> a;
    if (a<10000){
        cout << "Uang ditabung";
    }
    else {
        cout << "Beli jajan";
    }
}
