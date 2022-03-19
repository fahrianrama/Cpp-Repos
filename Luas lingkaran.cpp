#include <iostream>
using namespace std;
int main(){
  float l, r;
  const float phi = 3.14;
  cout << "Masukkan panjang jari-jari lingkaran: ";
  cin >> r;
  l = phi*r*r;
  cout << "Luas Lingkaran adalah "<< l << endl;
  return 0;
}
