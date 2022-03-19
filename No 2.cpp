# include <iostream>
# include <conio.h>

using namespace std;

main()
{
    int nilai;
    float angka_mutu;
    char huruf;
    string nilai_mutu;
    string sebutan_mutu;
    system("cls");
    cout <<"\n**************************************";
    cout <<"\n* Perhitungan Indeks Prestasi (IP) *";
    cout <<"\n**************************************";
    cout <<"\n";
    cout <<"\nMasukkan nilai Anda ! : "; cin >>nilai;
    /*Untuk If-Else Multi Kondisi(kondisi1 & kondisi2), maka diperlukan
    operator LOGIKA && untuk relasi AND, dan operator LOGIKA || untuk
    relasi OR*/
    if ((nilai>=85)&&(nilai<=100))
    {
        nilai_mutu = "A";
        angka_mutu = 4.0;
        sebutan_mutu = "Dengan Pujian";
    }
    else if ((nilai>=80)&&(nilai<=84))
    {
        nilai_mutu = "A-";
        angka_mutu = 3.6;
        sebutan_mutu = "Sangat Baik Sekali";
    }
    else if ((nilai>=75)&&(nilai<=79))
    {
        nilai_mutu = "B+";
        angka_mutu = 3.3;
        sebutan_mutu = "Baik Sekali";
    }
    else if ((nilai>=70)&&(nilai<=74))
    {
        nilai_mutu = "B";
        angka_mutu = 3.0;
        sebutan_mutu = "Baik";
    }
    else if ((nilai>=65)&&(nilai<=69))
    {
        nilai_mutu = "B-";
        angka_mutu = 2.6;
        sebutan_mutu = "Cukup Baik";
    }
    else if ((nilai>=60)&&(nilai<=64))
    {
        nilai_mutu = "C+";
        angka_mutu = 2.3;
        sebutan_mutu = "Lebih Dari Cukup";
    }
    else if ((nilai>=55)&&(nilai<=59))
    {
        nilai_mutu = "C";
        angka_mutu = 2.0;
        sebutan_mutu = "Cukup";
    }
    else if ((nilai>=50)&&(nilai<=54))
    {
        nilai_mutu = "C-";
        angka_mutu = 1.6;
        sebutan_mutu = "Kurang Cukup";
    }
    else if ((nilai>=40)&&(nilai<=49))
    {
        nilai_mutu = "D";
        angka_mutu = 1.0;
        sebutan_mutu = "Kurang";
    }
    else if (nilai<39)
    {
        nilai_mutu = "E";
        angka_mutu = 0.0;
        sebutan_mutu = "Gagal";
    }
    else
    {
        nilai_mutu = "T";
        angka_mutu = 0;
        sebutan_mutu = "Tertunda";
    }
    cout <<"\n\n";
    cout <<"\n================";
    cout <<"\n= NILAI ANDA =";
    cout <<"\n================";
    cout <<"\n";
    cout <<"\nNilai = " << nilai;
    cout <<"\nNilai Mutu = " << nilai_mutu;
    cout <<"\nAngka Mutu = " << angka_mutu;
    cout <<"\nSebutan Mutu = " << sebutan_mutu;
    getch();
}

