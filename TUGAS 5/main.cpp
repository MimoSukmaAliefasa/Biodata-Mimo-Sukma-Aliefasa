#include <iostream>

using namespace std;

int main()
{
    /*int hari;
    int bulan;

    cout << "Masukan Input Hari"  << endl;
    cin >> hari;
    cout << "Masukan Input Bulan" << endl;
    cin >> bulan;

    if (hari <= 31 && bulan == 1){
        cout << "Valid Bulan Januari" << endl;

    }else if (hari <= 28 && bulan == 2){
        cout << "Valid Bulan Febuari" << endl;

    }else if (hari <= 31 && bulan == 3){
        cout << "Valid Bulan Maret" << endl;

    }else if (hari <= 30 && bulan == 4){
        cout << "Valid Bulan April" << endl;

    }else if (hari <= 31 && bulan == 5){
        cout << "Valid Bulan Mei" << endl;

    }else if (hari <= 30 && bulan == 6){
        cout << "Valid Bulan Juni" << endl;

    }else if (hari <= 31 && bulan == 7){
        cout << "Valid Bulan Juli" << endl;

    }else if (hari <= 31 && bulan == 8){
        cout << "Valid Bulan Agustus" << endl;

    }else if (hari <= 30 && bulan == 9){
        cout << "Valid Bulan September" << endl;

    }else if (hari <= 31 && bulan == 10){
        cout << "Valid Bulan Oktober" << endl;

    }else if (hari <= 30 && bulan == 11) {
        cout << "Valid Bulan Nopember " << endl;

    }else if (hari <= 31 && bulan == 12){
        cout << "Valid Bulan Desember" << endl;

    }else {
        cout << "Tidak Valid" << endl;

    }*/
    int day;
    cin >> day;

    switch (day) {
        case 1:
            cout << "satu";
            break;
        case 2:
            cout << "Dua";
            break;
        default:
            cout << "undefined";
            break;
    }
    int x;
    //init // cond limit // x++ adalah counter
    for(x = 0; x < 24; x++)
        cout << x << "test" << endl;
   // x++ ==> x = x + 1 ==> x +=1


    return 0;
}
