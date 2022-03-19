#include <iostream>
#include <math.h>
#include <list>
#include <string.h>
#include <bits/stdc++.h>
# include <conio.h>
using namespace std;

main(){
	int menu = 0,nomor,sudut,x,peserta,counter=0;
	double tinggi;
	string nama;

	cout <<"\nMasukkan Jumlah Peserta : "; cin >>peserta;
	string data[peserta][2];
	while (menu!=5){
		system("cls");
		cout << "Program Hasil Pertandingan Memanah\n";
		cout << "1. Entri Data\n2. Tampilkan Data\n3. Cari Data\n4. Tentukan Juara\n5. Keluar";
		cout <<"\nMasukkan Menu : "; cin >>menu;
		if (menu==1){
			int skorakhir = 0;
			cout << "Nama : "; cin >> nama;
			for (int count =0; count<3;count++){
				cout << "Hasil Sasaran " << count+1 << " : "; cin >> nomor;
				int score = 100;
				int skor = 0;
				for (int i=1; i<=10;i++){
					if (i==nomor){
						skor = score;
						break;
					}
					else{
						score-=10;
					}
				}
				skorakhir+=skor;
			}
			string skorpeserta = to_string(skorakhir);
		    data[counter][0] = nama;
		    data[counter][1] = skorpeserta;
		    counter++;
		}
		
		else if (menu==2){
			for (int i=0; i<peserta; i++){
				cout << "\nPeserta ke : " << i+1;
				cout << "\nNama : " << data[i][0];
				cout << "\nSkor Akhir : " << data[i][1];
			}
		}
		
		else if (menu==3){
			string nama;
			cout << "\nMasukkan Nama : "; cin >> nama;
			for (int i=0; i<peserta; i++){
				if (strcmp(data[i][0].c_str(),nama.c_str()) == 0){
					cout << "\nNama : " << data[i][0];
					cout << "\nSkor Akhir : " << data[i][1];
				}
			}
		}
		else if (menu==4){
	        int counter = 0;
			string nilai[peserta];
			for (int i=0; i<peserta; i++){
				if (stod(data[i][1])!=0){
					nilai[counter] = data[i][1];
	                counter++;
				}
			}
			sort(nilai, nilai+counter,greater<string>());
			
			for (int i=0; i<3; i++){
				for (int j=0; j<peserta; j++){
					if (data[j][1] == nilai[i] ){
						cout << "\nJuara " << i+1;
						cout << "\n\tNama : " << data[j][0];
						cout << "\n\tSkor Akhir : " << data[j][1];
					}
				}
			}
		}
		getch();
	}
}



