#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <string>
#define N 100


int prodindex = 0,transindex = 0;

using namespace std;

typedef struct produk{
    int id_produk;
    char nama_produk[30];
    char kategori[10];
    int harga;

} produk;

typedef struct transaksi{
    int id_transaksi;
    int id_produk;
    int jumlah;
} transaksi;

void header();
void input_produk();
void input_transaksi();
void sort_produk();
void show_trans();
void search_trans();
void del_trans();
void proc_produk();
void proc_transaksi();

produk produkdata[N];
transaksi transdata[N];

void judul(){
	printf("===================================================\n");
	printf("Program Manajemen Transaksi Toko Blink-Blink\n");
	printf("Programmer: Nurul Husna\n");
	printf("===================================================\n");
}

void menu(){
	int pilihan;

	printf("\nMENU PILIHAN\n");
	printf("===================================\n");
	printf("1. Entri Data Produk\n");
	printf("2. Entri Data Transaksi\n");
	printf("3. Tampilkan Urutan Produk\n");
	printf("4. Tampilkan Data Transaksi\n");
	printf("5. Cari Data Transaksi\n");
	printf("6. Hapus Data Transaksi\n");
	printf("7. Lihat Rekapitulasi Produk\n");
	printf("8. Lihat Rekapitulasi Transaksi\n");
	printf("9. Keluar\n");
	printf("===================================\n");
	printf("Ketikan nomor pilihan: ");
	scanf("%d", &pilihan); fflush(stdin);

    switch(pilihan){
		case 1: input_produk();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
				getch();
				menu();
				break;
		case 2: input_transaksi();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
                getch();
				menu();
				break;
        case 3: printf("========================================\n");
                sort_produk();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
				getch();
				menu();
				break;
        case 4: printf("========================================\n");
                show_trans();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
				getch();
				menu();
				break;
        case 5: printf("========================================\n");
                search_trans();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
				getch();
				menu();
				break;
        case 6: printf("========================================\n");
                del_trans();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
				getch();
				menu();
				break;
        case 7: printf("========================================\n");
                proc_produk();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
				getch();
				menu();
				break;
        case 8: printf("========================================\n");
                proc_transaksi();
				printf("\nTekan enter untuk kembali ke Menu Pilihan... ");
				getch();
				menu();
				break;
        case 9: printf("Keluar dari Program\n");
				printf("Terima kasih... Tekan Enter");
				getch();
				exit(1);
    }
}

void input_produk(){
	int n,i,id,price;
	char nama[30];
	char kat[15];

	printf("\nInput Data Produk\n");
	printf("========================================\n");
	printf("Masukkan jumlah Produk : ");
	cin >> n;

	for(i=0;i<n;i++){
		printf("Masukkan ID Produk ke-%d: ",i+1);
		cin >> id;
		printf("Masukkan Nama Produk : ");
        scanf("%lf",&nama); fflush(stdin);
		printf("Masukkan Kategori Produk : ");
		cin >> kat;
		printf("Masukkan Harga Produk : ");
		cin >> price;
		printf("-------------------------------\n");
		produkdata[prodindex].id_produk = id;
		strcpy(produkdata[prodindex].nama_produk, nama);
		strcpy(produkdata[prodindex].kategori, kat);
		produkdata[prodindex].harga = price;
		prodindex+=1;
	}
}
void input_transaksi(){
	int n,i,id_prod,id_trans,total;

	printf("\nInput Data Transaksi\n");
	printf("========================================\n");
	printf("Masukkan jumlah Transaksi : ");
	cin >> n;

	for(i=0;i<n;i++){
		printf("Masukkan ID Transaksi ke-%d: ",i+1);
		cin >> id_trans;
		printf("Masukkan ID Produk : ");
		cin >> id_prod;
		printf("Masukkan Jumlah Barang : ");
		cin >> total;
		printf("-------------------------------\n");
		transdata[transindex].id_transaksi = id_trans;
		transdata[transindex].id_produk = id_prod;
		transdata[transindex].jumlah = total;

		transindex+=1;
	}
}

void sort_produk(){
    int i,j;

    int id_sort[prodindex];

    for (i=0;i<prodindex;i++){
        id_sort[i] = produkdata[i].id_produk;
    }
    int min, temp;
    for (i = 0; i < prodindex-1; i++) {
        min = i;
        for (j = i + 1; j < prodindex; j++)
          if (id_sort[j] < id_sort[min])
              min = j;
              temp = id_sort[i];
              id_sort[i] = id_sort[min];
              id_sort[min] = temp;
    }
    for (i=0;i<prodindex;i++){
        printf("\nHasil Sorting : ");
        for (j=0;j<prodindex;j++){
            if (id_sort[i] == produkdata[j].id_produk){
                printf("-------------------------------");
                printf("\nProduk ke-%d: ",i+1);
                printf("\n\tID Produk : \t%d",produkdata[j].id_produk);
                printf("\n\tNama Produk : \t%s",produkdata[j].nama_produk);
                printf("\n\tKategori Produk : \t%s",produkdata[j].kategori);
                printf("\n\tHarga Produk : \tRp.%d\n",produkdata[j].harga);
            }
        }
    }
}

void show_trans(){
    int i;
    for (i=0;i<transindex;i++){
        printf("-----------------------------");
        printf("\nTransaksi ke-%d: ",i+1);
        printf("\n\tID Transaksi : \t%d",transdata[i].id_transaksi);
        printf("\n\tID Produk : \t%d",transdata[i].id_produk);
        printf("\n\tJumlah Transaksi : \t%d\n",transdata[i].jumlah);
    }
}

void search_trans(){
    int i,cari;
    printf("Masukkan id transaksi : ");
    cin >> cari;
    for (i=0;i<transindex;i++){
        if (transdata[i].id_transaksi == cari){
            printf("-----------------------------\n");
            printf("Transaksi ditemukan !");
            printf("\n\tID Transaksi : \t%d",transdata[i].id_transaksi);
            printf("\n\tID Produk : \t%d",transdata[i].id_produk);
            printf("\n\tJumlah Transaksi : \t%d",transdata[i].jumlah);
            printf("-----------------------------");
        }
    }
}

void del_trans(){
    int i,cari,indexer = (-1);
    printf("Masukkan id transaksi yang akan dihapus : ");
    cin >> cari;
    for (i=0;i<transindex;i++){
        if (transdata[i].id_transaksi == cari){
            indexer = i;
            transindex-=1;
            printf("Transaksi dihapus!");
            printf("-----------------------------");
        }
    }
    if (indexer >= 0){
        for (i=indexer;i<transindex;i++){
            transdata[i].id_transaksi = transdata[i+1].id_transaksi;
            transdata[i].id_produk = transdata[i+1].id_produk;
            transdata[i].jumlah = transdata[i+1].jumlah;
        }
    }
}

void proc_produk(){
    int i, total = 0;
    printf("Laporan Produk : \n");
    printf("=========================\n");
    printf("Total Produk : %d produk\n",prodindex);
    for (i=0;i<prodindex;i++){
        total+=produkdata[i].harga;
    }
    int rata = total/prodindex;
    printf("Rata - rata harga produk : Rp.%d\n",rata);
}

void proc_transaksi(){
    int i, total = 0;
    printf("Laporan Transaksi : \n");
    printf("=========================\n");
    printf("Total Transaksi : %d transaksi\n",transindex);
    for (i=0;i<transindex;i++){
        for (int j=0;j<prodindex;j++){
            if (transdata[i].id_produk == produkdata[j].id_produk){
                total += transdata[i].jumlah * produkdata[j].harga;
            }
        }
    }
    int rata = total/transindex;
    printf("Total Pendapatan : Rp.%d\n",total);
    printf("Rata - rata penjualan tiap transaksi : Rp.%d\n",rata);
}

int main(){
	char jawab = 'Y';

	judul();
	do {
		menu();
		printf("\nKembali ke Menu Pilihan (Y/T)?: ");
		jawab = getche();
	}while(toupper(jawab)=='Y');
	printf("\nTerima kasih...");
	getch();
}



