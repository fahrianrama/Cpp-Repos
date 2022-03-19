#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <assert.h>
#define MAX 10
using namespace std;

int top=-1;
int head=-1;
int tail=-1;

string Stack[MAX],Mahasiswa[MAX],Judul[MAX];
int Waktu[MAX];

string admin[] = {"Afif", "Mora", "Radhit"};
string status = "Gagal",nama,hasil,kelas;
char yakin,judulpinjam[256];
int panjang,i,login,menu,nomor,nim,waktupinjam,random=0;

void enqueue(string mahasiswa, string judul, int waktu)
{
    head++;
    Mahasiswa[head] = mahasiswa;
    Judul[head] = judul;
    Waktu[head] = waktu;
}

void push(string judul){
    top++;
    Stack[top] = judul;
}

string verifikasi (string nama)
{
    panjang = sizeof(admin) / sizeof(*admin);
    for (i=0;i<panjang;i++)
    {
        if (nama==admin[i])
        {
            status = "Berhasil";
        }
    }
    return status;
}

void databuku(string user)
{
    cout << "Data Buku Tersedia : " << endl;
    for(i=0; i<MAX; i++)
    {
        cout << "\t" << i+1 << ". " << Stack[i] <<endl;
    }
    if (user == "admin")
    {
        cout << "Pilih : ";
        cin >> nomor;
        for (i=0; i<MAX; i++)
        {
            if (i+1==nomor)
            {
                cout << "Buku " << Stack[i] << " Berada di Tumpukan ke -" << i+1 <<endl;
                cout << "Dan Pada Antrian ke-" << i+1 <<endl;
            }
        }
    }
}

void datapinjam()
{
    cout << "--------------------  BUKU YANG SEDANG DIPINJAM -----------------------" << endl;
    cout << "|Nama Mahasiswa\t|\t   Judul Buku   \t|Waktu Peminjaman|\n";
    for(i=0; i<MAX; i++)
    {
        cout << i+1 << ". " << Mahasiswa[i] << "\t|" << Judul[i] << "\t|    " << Waktu[i] << " Hari\t|" << endl;
    }
}

int pinjambuku(string judulpinjam, int waktupinjam)
{
    for (i=0; i<MAX; i++)
    {
        int x = Stack[i].compare(judulpinjam);
        if (x==0)
        {
            cout << "Buku " << Stack[i] << " Berada di Tumpukan ke -" << i+1 <<endl;
            random = 1 + ( rand() % ( 100 - 1 + 1 ) );
            cout << "Dan Terdapat " << random << " Orang yang sedang mengantri" << endl;
        }
    }
    return random;
}
int kembalikanbuku()
{
    random = 1 + ( rand() % ( 100 - 1 + 1 ) );
    return random;
}

void insertdata()
{
    push("Cara Menjadi Analisis yang Hebat");
    push("Structure and Interpretation of Computer Programs");
    push("Pengantar Teknologi Informatika");
    push("Dasar Dasar Teknik Informatika");
    push("Komputer Cerdas untuk Mahasiswa Teknik Informatika");
    push("Aplikasi Komputer");
    push("Cara Menjadi Pemimpin yang Amanah");
    push("Pengantar Sistem Informasi");
    push("Management Information System");
    push("Sistem Informasi Bisnis");

    enqueue("Abdul Mursid","Jurnal Sistem Informasi",07);
    enqueue("Joko Driono","Analisa Sebuah Perusahaan",14);
    enqueue("Ahmad Jauhar","Cara Programming C++ Cepat",10);
    enqueue("Burhanudin","Menjadi Mahasiswa Pintar",06);
    enqueue("Jainudin","Raih Prestasi di Perkuliahan",14);
    enqueue("Farhan Idhar","Peluang Sukses Dini 100%",8);
    enqueue("Slamet Rudi","Panduan Belajar Cepat & Tepat",04);
    enqueue("Supriyanto","Pergaulan Sehat di Masa Muda",03);
    enqueue("Suryadarma","Pendapat Ahli Tentang Kode",9);
    enqueue("Massaidiyah","Koding dan Permasalahannya",13);
}

void clearscreen()
{
    system ("CLS");
}

char menumhs(string nama, int nim, string kelas)
{
    menuchck:
    clearscreen();
    cout << "Menu Mahasiswa : " << endl;
    cout << "\t1. Daftar Buku Tersedia\n";
    cout << "\t2. Pinjam Buku\n";
    cout << "\t3. Pengembalian Buku\n";
    cout << "\t4. Menu Utama\n";
    cout << "Pilih : ";
    cin >> menu;
    if (menu==1)
    {
        calldatamhs:
        clearscreen();
        databuku("mhs");
        cout << "Apakah anda ingin keluar (y/t) : ";
        cin >> yakin;
        if (yakin == 'y')
        {
            goto menuchck;
        }
        else
        {
            goto calldatamhs;
        }
    }
    else if (menu == 2)
    {
        cout << "Masukkan Judul Buku yang Akan Dipinjam : ";
        cin.ignore();
        cin.getline (judulpinjam,256);
        cout << "Masukkan Waktu Pinjaman : ";
        cin >> waktupinjam;
        random = pinjambuku(judulpinjam,waktupinjam);
        if (random != 0)
        {
            cout << "Jadi Apakah Anda yakin untuk meminjam ? (y/t)";
            cin >> yakin;
            if (yakin == 'y')
            {
                clearscreen();
                cout << "Data Peminjaman : \n";
                cout << "\tNama : " << nama << endl;
                cout << "\tNIM : " << nim << endl;
                cout << "\tKelas : " << kelas << endl;
                cout << "\tJudul Buku : " << judulpinjam << endl;
                cout << "\tWaktu Peminjaman : " << waktupinjam << " Hari" << endl;
                cout << "\tNomor Antrian : " << random+1 << endl;
                getch();
                goto menuchck;
            }
            else{
                goto menuchck;
            }
        }
        else{
            cout << "Buku Tidak Ditemukan";
            getch();
            goto menuchck;
        }
    }

    else if (menu == 3)
    {
        cout << "Masukkan Judul Buku yang Akan Dikembalikan : ";
        cin.ignore();
        cin.getline (judulpinjam,256);
        cout << "Masukkan Tanggal Pengembalian : ";
        cin >> waktupinjam;
        random = kembalikanbuku();
            cout << "Jadi Apakah Anda yakin untuk mengembalikan buku ? (y/t)";
            cin >> yakin;
            if (yakin == 'y')
            {
                clearscreen();
                cout << "Data Pengembalian : \n";
                cout << "\tNama : " << nama << endl;
                cout << "\tNIM : " << nim << endl;
                cout << "\tKelas : " << kelas << endl;
                cout << "\tBuku yang Dikembalikan : " << judulpinjam << endl;
                cout << "\tWaktu Pengembalian : " << waktupinjam << " Hari" << endl;
                cout << "\tTotal Mengantri Buku : " << random << endl;
                cout << "Apakah anda ingin keluar (y/t) : ";
                cin >> yakin;
                if (yakin == 'y')
                {
                    cout << "Terimakasih Telah Mengembalikan Buku Tepat Waktu";
                    goto menuchck;
                }
                else
                {
                    goto menuchck;
                }
            }
            else{
                goto menuchck;
            }
    }
    else{
        cout << "Apakah anda yakin ingin Keluar ? (y/t)";
        cin >> yakin;
        if (yakin == 'y')
        {
            cout << "Terimakasih Telah Berkunjung";
            return yakin;
        }
        else
        {
            goto menuchck;;
        }
    }

}

char menuadmin()
{
    clearscreen();
    cout << "Menu Admin : " << endl;
    cout << "\t1. Data Buku Tersedia\n";
    cout << "\t2. Data Peminjaman\n";
    cout << "\t3. Menu Utama\n";
    cout << "Pilih : ";
    cin >> menu;
    if (menu==1)
    {
        calldata:
        clearscreen();
        databuku("admin");
        cout << "Apakah anda ingin keluar (y/t) : ";
        cin >> yakin;
        if (yakin == 'y')
        {
            menuadmin();
        }
        else
        {
            goto calldata;
        }
    }
    else if (menu==2)
    {
        callpinjam:
        clearscreen();
        datapinjam();
        cout << "Apakah anda ingin keluar (y/t) : ";
        cin >> yakin;
        if (yakin == 'y')
        {
            menuadmin();
        }
        else
        {
            goto callpinjam;
        }
    }
    else
    {
        cout << "Kembali ke Menu Awal (y/t) : ";
        cin >> yakin;
        if (yakin == 'y')
        {
            return yakin;
        }
        else
        {
            menuadmin();
        }
    }
    return yakin;
}

int main(){
    insertdata();
    assert(Stack[0].strncmp('Cara Menjadi Analisis yang Hebat'));

    return 0;
}
