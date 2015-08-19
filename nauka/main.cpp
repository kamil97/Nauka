#include <iostream>

using namespace std;


void Dynamiczna_tablica(int n)
{
    int tablica[n];
}

int main()
{

    int a = 5;
    int tab[a];

    int *pInt;
    pInt = new int[a];

    for(int i= 0; i<a; i++){

            tab[i]=i+5;
            pInt[i]=i+20;
    }

    cout<<*tab<<endl;
    cout<<tab[0]<<endl;
    cout<<*(tab+2)<<endl;
    cout<<tab[2]<<endl;

    cout<<*pInt<<endl;
    cout<<pInt[0]<<endl;
    cout<<*(pInt+2)<<endl;
    cout<<pInt[2]<<endl;

    return 0;
}
