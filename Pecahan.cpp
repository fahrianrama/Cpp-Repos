#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int ratusanribu, limaplhribu, duaplhribu, seplhribu, limaribu, duaribu, seribu, limaratus, duaratus, seratus, jml_uang, sisa, jumlah;
    cout<<"Masukan Jumlah Uang : ";cin>>jml_uang;

    sisa=jml_uang;

    if(jml_uang >= 100000)
    {
        ratusanribu = sisa / 100000;
        printf(" %d Lembar 100.000\n", ratusanribu);
        sisa = jml_uang - (ratusanribu * 100000);
    }
    if(sisa >= 50000)
    {
        limaplhribu = sisa / 50000;
        printf(" %d Lembar 50.000\n", limaplhribu);
        sisa = sisa - (limaplhribu * 50000);
    }
    if(sisa >= 20000)
    {
        duaplhribu = sisa / 20000;
        printf(" %d Lembar 20.000\n", duaplhribu);
        sisa = sisa - (duaplhribu * 20000);
    }
    if(sisa >= 10000)
    {
        seplhribu = sisa / 10000;
        printf(" %d Lembar 10.000\n", seplhribu);
        sisa = sisa - (seplhribu * 10000);
    }

    if(sisa >= 5000)
    {
        limaribu = sisa / 5000;
        printf(" %d Lembar 5.000\n", limaribu);
        sisa = sisa - (limaribu * 5000);
    }
    if(sisa >= 2000)
    {
        duaribu = sisa / 2000;
        printf(" %d Lembar 2.000\n", duaribu);
        sisa = sisa - (duaribu * 2000);
    }
    if(sisa >= 1000)
    {
        seribu = sisa / 1000;
        printf(" %d Lembar 1.000\n", seribu);
        sisa = sisa - (seribu * 1000);
    }
    if(sisa >= 500)
    {
        limaratus = sisa / 500;
        printf(" %d Koin 500\n", limaratus);
        sisa = sisa - (limaratus * 500);
    }
    if(sisa >= 200)
    {
        duaratus = sisa / 200;
        printf(" %d Koin 200\n", duaratus);
        sisa = sisa - (duaratus * 200);
    }
    if(sisa >= 100)
    {
        seratus = sisa / 100;
        printf(" %d Koin 100\n", seratus);
        sisa = sisa - (seratus * 100);
    }
    getch ();
}
