#include <iostream>
using namespace std;
//Mencetak Karakter *
int main(){
    cout << "//Mencetak Karakter * \n";
    for (int i=0;i<7;i++){
        for (int j=0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
}
