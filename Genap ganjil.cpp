#include <iostream>
using namespace std;

int main(){
	int angka;
	cout<<"Masukan Angka : ";
	cin>>angka;

	if (angka%2==0){
		cout<<angka<<" Adalah bilangan genap"<<endl;
	}else {
		cout<<angka<<" Adalah bilangan ganjil"<<endl;
	}
}
