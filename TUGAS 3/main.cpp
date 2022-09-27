#include <iostream>

using namespace std;

int main()
{
    float panjang,lebar,tinggi,luas;

	cout<<"Program C++ Menghitung Luas Balok"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<endl;

	cout<<"Masukan Panjang	: ";
	cin>>panjang;

	cout<<"Masukan Lebar	: ";
	cin>>lebar;

	cout<<"Masukan Tinggi	: ";
	cin>>tinggi;

	//Hitung luas balok
	luas=((2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi));
	cout<<endl;

	cout<<"Luas Balok		: "<<luas<<endl;
}
