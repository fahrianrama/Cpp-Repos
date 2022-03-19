#include <iostream>
#include <math.h>
#include <list>
#include <string.h>
#include <bits/stdc++.h>
# include <conio.h>
using namespace std;

main(){
	int menu = 0,tali,sudut,x,peserta,counter=0;
	double tinggi;
	string nama;

	cout <<"\nMasukkan Jumlah Peserta : "; cin >>peserta;
	string data[peserta][2];
	while (menu!=4){
		system("cls");
		cout << "Menu Pengelolaan Hasil Pertandingan\n";
		cout << "1. Entri Data\n2. Cari Data\n3. Tentukan Juara\n4. Keluar";
		cout <<"\nMasukkan Menu : "; cin >>menu;
		if (menu==1){
			double pi = 3.14;
			cout << "Nama : "; cin >> nama;
			cout << "Tali Terukur (m): "; cin >> tali;
			cout << "Sudut Elevasi (derajat) : "; cin >> sudut;
			tinggi = tali * sin(sudut*pi/180);
	
			string tinggi2 = to_string(tinggi);
		    data[counter][0] = nama;
		    data[counter][1] = tinggi2;
		    counter++;
		}
		else if (menu==2){
			string nama;
			cout << "\nMasukkan Nama : "; cin >> nama;
			for (int i=0; i<peserta; i++){
				if (strcmp(data[i][0].c_str(),nama.c_str()) == 0){
					cout << "\nNama : " << data[i][0];
					cout << "\nTinggi Layang-layang : " << data[i][1] << "m";
				}
			}
		}
		else if (menu==3){
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
						cout << "\n\tTinggi Layang-layang : " << data[j][1] << "m";
					}
				}
			}
		}
		getch();
	}
}



