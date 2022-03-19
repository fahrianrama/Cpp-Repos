#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    char ulang = 'y';
    //Perulangan while
    while (ulang == 'y')
    {
        system("CLS");
        int menu;
        int a = 0, b = 0, c = 0;
        cout << "Kalkulator\n";
        cout << "Silahkan pilih operator anda : \n";
        cout << "1. Penjumlahan (+)\n";
        cout << "2. Pengurangan (-)\n";
        cout << "3. Perkalian (x)\n";
        cout << "4. Pembagian (/)\n";
        cout << "5. Mod\n";
        cout << "6. Gerbang Logika\n";
        cout << "7. Pangkat ^\n";
        cout << "8. Akar Pangkat 2\n";
        cout << "9. Faktorial (!)\n";
        cout << "10. Log\n";
        cout << "Pilih input anda : ";
        cin >> menu;
        //Pembanding
        if (menu < 6)
        {
            cout << "\nMasukkan angka pertama : ";
            cin >> a;
            cout << "\nMasukkan angka kedua : ";
            cin >> b;
        }
        else if (menu == 6)
        {
            bool x = true;
            bool y = false;
            bool hasil;
            //Logika
            hasil = x && y;
            cout << "\nHasil dari 1 AND 1 : " << hasil << endl;

            hasil = x && y;
            cout << "\nHasil dari 1 AND 0 : " << hasil << endl;

            hasil = x || y;
            cout << "\nHasil dari 1 OR 0 : " << hasil << endl;

            hasil = y || y;
            cout << "\nHasil dari 0 OR 0 : " << hasil << endl;

            hasil = !x;
            cout << "\nHasil dari NOT 1 : " << hasil << endl;

            hasil = !y;
            cout << "\nHasil dari NOT 0 : " << hasil << endl;
        }
        else
        {
            cout << "\nMasukkan angka : ";
            cin >> a;
        }
        //if dan if bertingkat
        if (menu == 1)
        {
            //Operator aritmatika
            c = a+b;
        }
        else if (menu == 2)
        {
            c = a-b;
        }
        else if (menu == 3)
        {
            c = a*b;
        }
        else if (menu == 4)
        {
            c = double(a)/double(b);
        }
        else if (menu == 5)
        {
            c = a%b;
        }
        else if (menu == 7)
        {
            int x;
            cout << "\nMasukkan banyak pangkat : ";
            cin >> x;
            c = a;
            //perulangan for
            for (int i = 1; i < x; i++)
            {
                c *= a;
            }
        }
        else if (menu == 8)
        {
            c = sqrt(a);
        }
        else if (menu == 9)
        {
            int x = int(a);
            c = a;
            for (int i = 1; i < a; i++)
            {
                x -= 1;
                c *= x;
            }
        }
        else if (menu == 10)
        {
            c = log(a);
        }

        cout << "\nHasilnya : " << c;

        cout << "\nApakah ingin menggunakan kalkulator lagi? (y/n) : ";
        cin >> ulang;
    }

}
