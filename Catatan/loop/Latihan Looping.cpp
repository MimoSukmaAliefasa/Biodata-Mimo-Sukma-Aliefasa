//Program nested loop untuk mencetak bintang sebanyak 3 baris dan 2 kolom//
#include <iostream>

using namespace std;
int x;
int y;

//algoritma
int main()
{
    x = 1;
    while(x<=3)
    {
        y = 1;
        while(y<=2)
        {
            y++;
            cout << "*" ;
        }
        x++;
        cout << endl;
    }
    return 0;
}
