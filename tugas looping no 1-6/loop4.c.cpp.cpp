#include <iostream>

using namespace std;

int main(){
    int i;
    float jumlah,rata_rata;

    for (i = 1; i <= 20; i++){
        jumlah += i;
        rata_rata = jumlah/i;
        cout << i << endl;
    }
    cout << endl;
    cout << "jumlah = " << jumlah << endl;
    cout << "rata-rata = " << rata_rata << endl;
    return 0;
}

