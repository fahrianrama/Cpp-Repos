#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? nilai;
   ?? membayar_uang_kuliah;
   ?? tes;
   ?? jurusan;
   ?? daftar;
   ?? nama;
   ?? bayar_biaya_pendaftaran;

   daftar =true;
   raptor_prompt_variable_zzyz ="Masukkan Nama Anda";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> nama;
   raptor_prompt_variable_zzyz ="Mengisi jurusan yang dipilih";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> jurusan;
   bayar_biaya_pendaftaran =true;
   tes =true;
   raptor_prompt_variable_zzyz ="Nilai tes";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> nilai;
   if (nilai>=80)
   {
      cout << "Selamat "+nama+" Anda Lolos di jurusan "+jurusan << endl;      membayar_uang_kuliah =true;
      cout << "Anda dinyatakan resmi terdaftar sebagai mahasiswa "+jurusan << endl;   }
   else
   {
      cout << "Maaf anda tidak lolos" << endl;   }

   return 0;
}
