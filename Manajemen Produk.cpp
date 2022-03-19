#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    string produkdata[20][20];
    int count = 0;
}

class produk:
    def __init__(self, nama, harga, stok):
        self.nama = nama
        self.harga = harga
        self.stok = stok

    def insert(self):
        insertproduk = []
        insertproduk.append(self.nama)
        insertproduk.append(self.harga)
        insertproduk.append(self.stok)
        produkdata.append(insertproduk)
    def show(self):
        counter = 1
        for i in range(len(produkdata)):
            if produkdata[i][0]!=None:
                print("Produk ke-",counter," : ")
                print("\tNama : ",produkdata[i][0])
                print("\tHarga : ",produkdata[i][1])
                print("\tStok : ",produkdata[i][2])
                counter+=1
    def delete(self,nama):
        for i in range(len(produkdata)):
            if produkdata[i][0] == nama:
                print("Barang ",nama," dihapus")
                produkdata[i][0] = None
                produkdata[i][1] = None
                produkdata[i][2] = None
    def search(self,nama):
        found = False
        for i in range(len(produkdata)):
            if produkdata[i][0] == nama:
                print("Produk ditemukan!")
                print("\tNama : ",produkdata[i][0])
                print("\tHarga : ",produkdata[i][1])
                print("\tStok : ",produkdata[i][2])
                found = True
        if found == False:
            print("Produk tidak ditemukan")


produk1 = produk("Ayam",50000,30)
produk1.insert()
produk2 = produk("Indomie",2000,60)
produk2.insert()
menu = 0
while menu!=5:
    print("Pendataan barang toko Berkah \nPilih menu : ")
    print("1. Tambahkan produk")
    print("2. Tampilkan produk")
    print("3. Cari Produk")
    print("4. Hapus Produk")
    print("5. Exit")
    print("="*30)
    menu = int(input("Pilih : "))
    print("="*30)
    if menu==1:
        nama = input("Masukkan nama produk : ")
        harga = int(input("Masukkan harga produk : "))
        stok = int(input("Masukkan stok produk : "))
        produknew = produk(nama,harga,stok)
        produknew.insert()
    elif menu==2:
        produk1.show()
    elif menu==3:
        nama = input("Masukkan nama barang yang akan dicari : ")
        produk1.search(nama)
    elif menu==4:
        nama = input("Masukkan nama barang yang akan dihapus : ")
        produk1.delete(nama)
    print("="*30)
