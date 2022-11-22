#include <iostream>

using namespace std;

int main(){
    int x;

    while(true)
    {
        cout << "Masukan Nilai Anda : ";
        cin >> x ;
        {
            if(x == -99)
            {
                cout << endl;
                cout << "Keluar Karena Break" <<endl;
                break;
            }
        }
    }

    return 0;
}
