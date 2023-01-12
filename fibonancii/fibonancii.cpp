#include <iostream>

using namespace std;

int main()
{
    int a, a1=0, a2=1, hasil =0;
    cout << "Masukan batas deret : ";
    cin >>a;
        cout<<endl;
    cout << "Deret Fibonacci: ";
        for(int x=1; x<=a; x++){
            if(x==1) {
                cout<<" "<<a1<<" ";
                continue; // 0
            }
            if(x==2) {
                cout<<a2<<" ";
                continue; //1
            }
        hasil = a1+a2 ;
        a1 = a2;
        a2 = hasil;
        cout << hasil << " ";
    }

    return 0;
}
