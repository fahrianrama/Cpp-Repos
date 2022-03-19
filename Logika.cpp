#include <iostream>

using namespace std;

int main()
{
  bool a = true;
  bool b = false;
  bool hasil;

  hasil = a && a;
  cout << "Hasil dari 1 AND 1 : " << hasil << endl;

  hasil = a && b;
  cout << "Hasil dari 1 AND 0 : " << hasil << endl;

  hasil = a || b;
  cout << "Hasil dari 1 OR 0 : " << hasil << endl;

  hasil = b || b;
  cout << "Hasil dari 0 OR 0 : " << hasil << endl;

  hasil = !a;
  cout << "Hasil dari NOT 1 : " << hasil << endl;

  hasil = !b;
  cout << "Hasil dari NOT 0 : " << hasil << endl;

  return 0;
}
