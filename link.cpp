#include <iostream>
#include<conio.h>
#include<windows.h>
#include <stdio.h>
using namespace std;

int pil;
void pilih();
void buat_baru();
void tambah_baru();
void tambah_belakang();
void tambah_tengah();
void tampil_data();
void hitung_gaji();

struct simpul{
 char nama[20],golongan, alamat[80];
 int hari;
 struct simpul *next;
}karyawan, *baru, *awal=NULL,*tengah=NULL, *akhir=NULL, *hapus, *bantu;

void clrscr(){
 system("cls");
}

int main(){
 do{
  clrscr();
  cout << "MENU SINGLE  LINKEDLIST" << endl;
  cout << "1. Tambah Karyawan Baru" << endl;
  cout << "2. Tambah Karyawan Lama" << endl;
  cout << "3. Tambah Karyawan yang Belum Dimasukkan" << endl;
  cout << "4. Tampilkan Data Karyawan" << endl;
  cout << "5. Hitung Gaji Karyawan" << endl;
  cout << "6. Selesai" << endl;
  cout << "Pilihan anda: ";
  cin>>pil;
  pilih();
 }while (pil!=6);
 return 0;
}

void pilih(){
 if(pil==1){
  tambah_baru();
 }
 else if(pil==2){
  tambah_belakang();
 }
 else if(pil==3){
  tambah_tengah();
 }
 else if(pil==4){
  tampil_data();
 }
 else if(pil==5){
  hitung_gaji();
 }
}

void buat_baru(){
    baru=(simpul*)malloc(sizeof(struct simpul));
    cout << "Masukkan Nama karyawan : ";
    cin >> baru->nama;
    cout << "Masukkan Golongan karyawan : ";
    cin >> baru->golongan;
    cout << "Masukkan Alamat Karyawan : ";
    cin >>baru->alamat;
    cout << "Masukkan Jumlah Hari Kerja : ";
    cin >> baru->hari;
    baru->next=NULL;
}

void tambah_belakang(){
 buat_baru();
 if(awal==NULL){
  awal=baru;
 }
 else{
  akhir->next=baru;
 }
 akhir=baru;
 akhir->next=NULL;
 cout << endl << endl;
 tampil_data();
}

void tambah_baru(){
 buat_baru();
 if(awal==NULL){
  awal=baru;
  akhir=baru;
  akhir->next=NULL;
 }
 else{
  baru->next=awal;
  awal=baru;
 }
 cout << endl << endl;
 tampil_data();
}

void tambah_tengah(){
 buat_baru();
 if(awal==NULL){
  awal=baru;
  tengah=baru;
  tengah->next=NULL;
 }
 else{
  baru->next=tengah;
  tengah=baru;
 }
 cout << endl << endl;
 tampil_data();
}

void hitung_gaji(){
 if(awal==NULL){
  cout << "Kosong";
 }
 else{
  int gaji,harian;
  bantu=awal;
  while(bantu!=NULL){
      harian=bantu->hari;
    if (bantu->golongan=='A'){
        gaji==40000*harian;}
    else if(bantu->golongan=='B'){
        gaji==45000*harian;
    }
    else if(bantu->golongan=='C'){
        gaji==50000*harian;
    }
    else if(bantu->golongan=='D'){
        gaji==60000*harian;
    }
   cout << "Nama Karyawan : " << bantu->nama << endl;
   cout << "Gaji : " <<gaji<<endl;
   bantu=bantu->next;
  }
 getch();
}
}
void tampil_data(){
 if(awal==NULL){
  cout << "Kosong";
 }
 else{
  bantu=awal;
  while(bantu!=NULL){
   cout << "Nama Karyawan : " << bantu->nama << endl;
   cout << "Alamat Karyawan : " << bantu->alamat << endl;
   cout << "Golongan Karyawan : " << bantu->golongan << endl;
   cout << "Jumlah Hari Kerja : " << bantu->hari<<endl;
   bantu=bantu->next;
  }
 }
 getch();
}
