#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? data4;
   ?? nama;
   ?? a;
   ?? data5;
   ?? data;
   ?? i;
   ?? data2;
   ?? data3;

   a =0;
   data ="Hadi Purnomo";
   data2 ="Noer Laila";
   data3 ="Nazwa Nabilla";
   data4 ="Reno Afrizal Haqq";
   data5 ="M Khoiron Afif";
   while (!(a>4))
   {
      i =1;
      raptor_prompt_variable_zzyz ="Masukkan Nama : ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> nama;
      while (!(i!=1))
      {
         if (nama==data)
         {
            cout << "Oke" << endl;            i =0;
            a =a+1;
         }
         else
         {
            if (nama==data2)
            {
               cout << "Oke" << endl;               i =0;
               a =a+1;
            }
            else
            {
               if (nama==data3)
               {
                  cout << "Oke" << endl;                  i =0;
                  a =a+1;
               }
               else
               {
                  if (nama==data4)
                  {
                     cout << "Oke" << endl;                     i =0;
                     a =a+1;
                  }
                  else
                  {
                     if (nama==data5)
                     {
                        cout << "Oke" << endl;                        i =0;
                        a =a+1;
                     }
                     else
                     {
                        cout << "Ini Bukan Keluarga Saya !" << endl;                        i =0;
                        a =a+1;
                     }
                  }
               }
            }
         }
      }
   }

   return 0;
}
