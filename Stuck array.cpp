#include <iostream>
using namespace std;

int main()
{
   int nilai[10];
   int maksimum, minimum;
   
   cout << "Masukkan 10 nilai: " << endl;
   
   for(int i = 0; i < 10; i++)
   {
      cin >> nilai[i];
   }
   
   maksimum = nilai[0];
   minimum = nilai[0];
   
   for(int i = 1; i < 10; i++)
   {
      if(nilai[i] > maksimum)
      {
         maksimum = nilai[i];
      }
      
      if(nilai[i] < minimum)
      {
         minimum = nilai[i];
      }
   }
   
   cout << "Nilai maksimum: " << maksimum << endl;
   cout << "Nilai minimum: " << minimum << endl;
   
   return 0;
}

