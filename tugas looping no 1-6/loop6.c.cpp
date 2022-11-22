#include <iostream>

using namespace std;

int main()
{
    int nilai, maks, minim, i;
    for(i = 1; i < 1000; i++){
        cout << "masukkan nilai = ";
        cin >> nilai;
        if (nilai == -99){
            minim != -99;
        }
        else if (i==1){
            maks = nilai;
            minim = nilai;
        }
        else if (minim>nilai){
            minim = nilai;
        }
        else if (maks<nilai){
            maks = nilai;
        }
        if (nilai==-99){
        break;
     }
    }
    cout << "nilai maksimal = " << maks << endl;
    cout << "nilai minimal = " << minim << endl;
    return 0;
}
