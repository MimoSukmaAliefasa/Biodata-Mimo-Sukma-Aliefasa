#include <iostream>
using namespace std;

void buatPiramidsim(int);
void buatPiramidrtkiri(int);

int main()
{
    buatPiramidsim(7);
  buatPiramidrtkiri(8);
    return 0;
}

void buatpiramidori(int a)
{
    int b = a;
    int d = 1;
    for(b,d; b > 0; --b, ++d)
    {
        cout<<b<<"=";
        cout<<d<<endl;
        int subd = d;
        for (subd; subd > 0;--subd)
        {
            cout<<"^";
        }
    }
}

void buatPiramidrtkiri(int a)
{
    int b = a;
    int d = 1;
    for (b,d; b > 0; --b, ++d)
    {

            int posisi = b;
        while(posisi > 0)
            {
            cout<<" ";
            --posisi;
        }
        int subd = d+(d-1);
        for(subd; subd > 0;--subd)
          {
           cout<<"&";
           --posisi;
          }
          cout<<endl;
    }
}

void buatPiramidsim(int a)
{
    int b = a;
    int d = 1;
    for(b,d; b > 0; --b, ++d)
    {
        int posisi = b;
        while(posisi > 0)
        {
            cout<<" ";
            --posisi;
        }
        int subd = d+(d-1);
        for(subd; subd > 0;--subd)
        {

            cout<<"#";

        }
        cout<<endl;


    }
}

