#include <iostream>
using namespace std;

int main(){
 int x;
 while (true){
      cout <<" Daftar menu Makanan\n 1. Nasi Kerikil\n 2. Rica-Rica Bekicot\n 3. Pepes Brotowali\n 4. Kepiting Presto\nMasukan Kode Makanan :";
 cin >>x;
 switch (x){
     case 1:
        cout << "Nasi Kerikil";
        break;
     case 2:
        cout << "Rica-Rica Bekicot";
        break;
     case 3:
        cout << "Pepes Brotowali";
        break;
     case 4:
        cout << "Kepiting Presto";
        break;
     default:
        cout << "Maaf,kode makanan tidak ditemukan" << endl;
 }
 }
return 0;
}
