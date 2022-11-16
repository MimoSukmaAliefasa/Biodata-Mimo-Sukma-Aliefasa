#include <iostream>

using namespace std;

int main(){
    int uang = 5000;
    int permen, jumlahPermen, kembalian;
    cout <<"Ardian ingin membeli permen 1000 / 500 / 300: "; cin >> permen;
    if (permen == 1000){
        jumlahPermen = 3;
        kembalian = 5000 - ( 3 * 1000);
        cout <<"Ardian membeli " <<jumlahPermen << " dengan kembalian " <<kembalian <<" ribu" <<endl;
    }
    else if (permen == 500){
        jumlahPermen = 5000 / 500;
        cout <<"Ardian membeli " <<jumlahPermen <<endl;
    }
    else if (permen == 300){
        int total = 0;
        jumlahPermen = 5000 / 300;
        cout <<"Cetak: ";
        for (int i = 1; i <= jumlahPermen; i++){
            total += 300;
            cout <<permen*i <<", ";
        }
        kembalian = 5000 - total;
        cout <<"\nArdian membeli " <<jumlahPermen <<" dengan kembalian " <<kembalian <<endl;
    }

    else{
        cout <<"Tidak ada permen dengan harga itu" <<endl;
    }


}
