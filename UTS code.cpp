#include <iostream>
using namespace std;
int main() {
    string nama_keluarga[5] = { "Hadi Purnomo", "Noer Laila", "Nazwa Nabilla", "Reno Afrizal Haqq", "M Khoiron Afif" };
    char nama[100];
    for (int a = 0; a < 5; a++){
        cout << "Tuliskan Nama : ";
        cin.getline(nama, sizeof(nama));
        for (int i = 0; i < 5; i++) {
            if (nama == nama_keluarga[i]) {
                cout << "Oke" <<endl;
                break;}
            else if (i == 4){
                cout << "Ini Bukan Keluarga Saya !"<<endl;}
            }
    }
}