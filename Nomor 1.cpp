#include <iostream>
using namespace std;
int tambah(int A, int B){
    return A+B;
}
int kurang(int A,int B){
    return A-B;
}
int kali(int A, int B){
    return A*B;
}
int bagi(int A,int B){
    return A/B;
}
int main()
{
    int A,B;
    A=10;
    B=2;
    cout<<"Hasil Tambah = "<<tambah(A,B)<<endl;
    cout<<"Hasil Kurang = "<<kurang(A,B)<<endl;
    cout<<"Hasil Kali   = "<<kali(A,B)<<endl;
    cout<<"Hasil Bagi   = "<<bagi(A,B);
}


