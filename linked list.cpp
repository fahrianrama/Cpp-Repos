#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
/* membuat linked list */
typedef struct myLinkedList {
char nim[10];
char nama[35];
int nilai;

myLinkedList *next;
};

myLinkedList *head;

/* keadaan awal */
void init() {
head = NULL;
}

/* fungsi untuk mengecek linked list
* apakah kosong atau tidak
* jika kosong maka bernilai 1
* jika tidak kosong maka bernilai 0
*/
int paKosong() {
if (head == NULL) return 1;
else return 0;
}

/**
* fungsi untuk menambahkan data dari depan node
*/
void tambahDepan() {

myLinkedList *baru;
baru = new myLinkedList;

cout<<"Masukkan Data lengkap di bawah ini : ";
cout<<"NIM : "; cin >> baru->nim;
cout<<"Nama : "; cin >> baru->nama;
cout<<"Nilai : "; cin >> baru->nilai;

baru->next = NULL;

if (paKosong() == 1) {
head = baru;
head->next = NULL;
} else {
baru->next = head;
head = baru;
}
}
/**
* fungsu untuk menambahkan data dari depan node
*/

void tambahBelakang() {

myLinkedList *baru, *bantu;
baru = new myLinkedList;

cout << "Masukkan Data lengkap di bawah ini : ";
cout<<"NIM : "; cin >> baru->nim;
cout << "Nama : "; cin >> baru->nama;
cout << "Nilai : "; cin >> baru->nilai;

baru->next = NULL;

if (paKosong() == 1) {
head = baru;
head->next = NULL;
} else {
bantu = head;
while (bantu->next != NULL) {
bantu = bantu->next;

}
bantu->next = baru;
}
}

/**
* fungsi untuk menghapus dari depan node
*/
void hapusDepan() {
myLinkedList *hapus;
char *data;
if (paKosong() == 0) {
if (head->next != NULL) {
hapus = head;
data = hapus->nim;
head = head->next;
delete hapus;
} else {
data = head->nim;
head = NULL;
}



/**
* fungsi untuk menghapus dari belakang node
*/
void hapusBelakang() {
myLinkedList *hapus, *bantu;
char *data;
if (paKosong() == 0) {
if (head->next != NULL) {
bantu = head;
while(bantu->next->next != NULL) {
bantu = bantu->next;
}

hapus = bantu->next;
data = hapus->nim;
bantu->next = NULL;
delete hapus;
} else {
data = head->nim;
head = NULL;
}


cout << "Tekan Enter untuk kembali ke Menu!"; getch(); }

/**
* fungsi untuk menampilkan data linked list
*/

void tampilData() {
int no = 1;

myLinkedList *bantu;
bantu = head;
if (paKosong() == 0) {
while (bantu != NULL) {
cout << "No. : " <<>nim <<>nama <<>nilai <<>

no++;
bantu = bantu->next;
}
cout <<>

} else {
cout << "Data masih kosong " <<>

/**
* fungsi Menu, Untuk menentukan linked list mana
* yang dipilih
*/
int menu() {
int pilihan;

cout << "+———————-+\n"; cout << "| MENU PILIHAN |\n"; cout << "+———————-+\n"; cout << "| 1. Tambah Depan |\n"; cout << "| 2. Tambah Belakang |\n"; cout << "| 3. Hapus Depan |\n"; cout << "| 4. Hapus Belakang |\n"; cout << "| 5. Tambah Tengah |\n"; cout << "| 6. Hapus Tengah |\n"; cout << "| 7. TampilData |\n"; cout << "| 8. Keluar |\n"; cout << "+———————-+\n"; cout << "| PILIHAN ANDA ? [ ] |\n"; cout << "+———————-+\n";

cin >> pilihan;
return pilihan;
}

/**
* fungsi operasi data
*/
void operasiData() {
int pilih;

do {
pilih = menu();

switch (pilih) {
case 1 :
tambahDepan();
break;
case 2 :
tambahBelakang();
break;
case 3 :
hapusDepan();
break;

case 4 :
hapusBelakang();
break;
case 5 :
tampilData();
break;
case 6:

cout << "Terima kasih coy!!!"; break; } } while (pilih != 6); }

/**
* PROGRAM UTAMA
*/
void main() {
init();
operasiData();
}
