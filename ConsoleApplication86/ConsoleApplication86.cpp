#include<iostream>
#include "Reservoir.h"
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int size = 5;
    Reservoir* a = new Reservoir[size];
    Reservoir b;
   
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        a[i].Volume();
        a[i].Area();
        a[i].Sravn();
        if (a[i].Getsea()>15000)
        {
            c++;
        }

    cout << c << endl;
    }


    cout << endl;
    delete[] a;
}