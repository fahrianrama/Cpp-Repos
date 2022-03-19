#include<bits/stdc++.h>
using namespace std;


int main()
{
    int alfabet = 0,i,j;
	char huruf,temp;
	cout << "Masukkan jumlah alfabet yang ingin dimasukkan : ";
	cin >> alfabet;
    char a[alfabet];
    for (int i=0; i<alfabet; i++)
	{
		cout << "Masukkan alfabet ke-"<<i+1<<" : ";
		cin >> huruf;
		a[i] = huruf;
	}
    cout<<"Alfabet sebelum di sorting : ";
    for(int i=0;i<alfabet;i++)
           cout<<a[i]<<",";
    cout<<"\nAlfabet setelah di sorting : ";

    for(int i = 0; i < alfabet; i++)
		for(int j = 0; j < alfabet-1; j++)
		{
			if(a[j+1] < a[j])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
    for (i=0;i<alfabet;i++)
    {
        cout<<a[i]<<",";
    }
}
