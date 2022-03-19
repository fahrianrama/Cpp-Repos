#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstring>
#include <bits/stdc++.h>
#define g 10

using namespace std;

struct Data_Peserta
{
    char nama[30];
    int nomor;
    int kecepatan;
    int sudut_elevasi;
    double radian;
    double jangkauan;
};

void header(){
    printf("============================================\n");
    printf("Menu Pengelolaan Pertandingan Lempar Lembing\n");
    printf("============================================\n");
}

void showdata(struct Data_Peserta *tampil,int counter){
    for (int i =0; i<counter; i++){
        printf("Peserta Ke : %d\n",i+1);
        printf("\tNama Peserta : %s\n\tNomor Urut : %d\n\tKecepatan Awal : %d m/s\n\tSudut Elevasi : %d ^\n\tJarak Lemparan : %lf m\n",tampil[i].nama,tampil[i].nomor,tampil[i].kecepatan,tampil[i].sudut_elevasi,tampil[i].jangkauan);
        printf("-------------------------\n");
    }
}

void inputdata (struct Data_Peserta *masukan, int counter){
    char nama[30];
    int nomor;
    int kecepatan,sudut_elevasi;
    double pi = 3.14, radian, hasil;
    printf("Masukkan Nama Peserta : \n");
    scanf("%s",&nama);
    printf("Masukkan Nomor Urut Peserta : \n");
    scanf("%d",&nomor);
    printf("Masukkan Kecepatan Awal Lemparan Peserta : \n");
    scanf("%d",&kecepatan);
    printf("Masukkan Sudut Elevasi Lemparan Peserta : \n");
    scanf("%d",&sudut_elevasi);
    radian = sudut_elevasi*pi/180;
    hasil = (kecepatan*kecepatan) * (sin(2*radian)/g);

    strcpy(masukan[counter].nama, nama);
    masukan[counter].nomor = nomor;
    masukan[counter].kecepatan = kecepatan;
    masukan[counter].sudut_elevasi = sudut_elevasi;
    masukan[counter].radian = radian;
    masukan[counter].jangkauan = hasil;
    printf("Data berhasil dimasukkan!\n");
}

void searchdata(char nama[30],struct Data_Peserta *tampil, int counter){
    int found=0;
    for (int i=0;i<counter;i++){
        if (strcmp(tampil[i].nama,nama)==0){
            printf("Data ditemukan!\n");
            printf("\tNama Peserta : %s\n\tNomor Urut : %d\n\tKecepatan Awal : %d m/s\n\tSudut Elevasi : %d ^\n\tJarak Lemparan : %lf m\n",tampil[i].nama,tampil[i].nomor,tampil[i].kecepatan,tampil[i].sudut_elevasi,tampil[i].jangkauan);
            found = 1;
        }
    }
    if (found!=1){
        printf("Data tidak ditemukan!");
    }
}

void juara(struct Data_Peserta *urut,int counter){
    double urutan[counter];
    for (int i=0; i<counter; i++){
        urutan[i] = urut[i].jangkauan;
    }
    sort(urutan, urutan + counter, greater<int>());
    for (int i =0; i<3; i++){
        for (int j=0;j<counter;j++){
            if (urutan[i] == urut[j].jangkauan){
                printf("Juara Ke : %d\n",i+1);
                printf("\tNama Peserta : %s\n\tNomor Urut : %d\n\tKecepatan Awal : %d m/s\n\tSudut Elevasi : %d ^\n\tJarak Lemparan : %lf m\n",urut[j].nama,urut[j].nomor,urut[j].kecepatan,urut[j].sudut_elevasi,urut[j].jangkauan);
                printf("-------------------------\n");
            }
        }
    }
}

main(){
    int peserta,menu=0,counter=0;
    header();
    printf("Masukkan jumlah peserta : \n");
    scanf("%d",&peserta);
    Data_Peserta data[peserta];

    while (menu!=5){
        system("cls");
        header();
        printf("1. Masukkan Data Pertandingan\n2. Lihat Data Pertandingan\n3. Cari Data Pertandingan\n4. Lihat Daftar Juara\n5. Keluar\n");
        printf("Pilih : ");
        scanf("%d",&menu);
        if (menu==1){
            inputdata(data,counter);
            counter++;
        }
        else if (menu == 2){
            showdata(data,counter);
        }
        else if (menu==3){
            char nama[30];
            printf("Masukkan nama : ");
            scanf("%s",nama);
            searchdata(nama,data,counter);
        }
        else if (menu==4){
            juara(data,counter);
        }
        getch();
    }


}
