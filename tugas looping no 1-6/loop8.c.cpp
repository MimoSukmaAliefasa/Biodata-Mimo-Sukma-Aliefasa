#include <iostream>

using namespace std;

int main()
{
    int i,sum=0;
    cout<<"Input bilangan: ";
    cin>>i;
    do
    {
        cout<< i <<endl;
        sum+=i;
        cout<<"Input Bilangan : ";
        cin>>i;

    }
    while(i != 9999);
        cout << "Jumlah angka ="<<sum<<endl;


    return 0;
}
