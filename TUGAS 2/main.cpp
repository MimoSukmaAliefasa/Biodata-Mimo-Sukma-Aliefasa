#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Hello Dinusian!" << endl;
    printf("Bio Tubuh \n");

    //variable
    int x; //deklarasi
    x = 18;//assigns
    float y = 168.7;//inisialisasi
    char z = 'M';
    string zz = "XL";

    //programs
    cout<<"umur Saya :" << x;
    cout<<""<<endl;
    cout<<"Tinggi Saya : " << y;
    cout<<"\nUkuran Baju Saya : " << z;
    cout<<"\nUkuran Baju Teman Saya : " << zz;

    int a;
    cout<<"\nMasukkan Angka : " <<endl;
    cin>> a;
    cout<<"Angka Anda :" << a+x;

    return 0;
}
