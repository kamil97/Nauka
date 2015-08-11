#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void FillTableRandom(int* table, int _size);
void FillTableWithIndexes(int* table, int _size, int startNumber = 0); // startNumber = 0 -> argument domyslny, mozemy wywolac ta funkcje jako func(tablica,20);
void ShowTable(int* table, int _size);


void Wypelnij_liczby_z_klawiatury(int* tablica, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        cout <<"podaj liczbe : "<<endl;
        int liczby;
        cin >>liczby;
        tablica[i]=liczby;
    }
}




int Sprawc_n(int n, int* tablica, int rozmiar)
{
    int ile_n = 0;
    for(int i=0; i<rozmiar; i++)
    {
        if(tablica[i]==n)
        {
            ile_n=ile_n+1; // ile_n++;
        }
    } return ile_n;
}




int main()
{



    int rozmiar = 1000;
    int tab[rozmiar];
    FillTableRandom(tab,rozmiar);
    int n=13;

    cout << Sprawc_n(n, tab, rozmiar)<<endl;
    ShowTable(tab, rozmiar);



    return 0;
}


void FillTableRandom(int* table, int _size){
    srand(time(NULL)); // podaje ziarno dla funkcji rand()
    for(int i=0;i<_size;i++){
        table[i] = rand()%100;
    }
}

void FillTableWithIndexes(int* table, int _size, int startNumber){

for(int i=0; i<_size; i++)
{
    table[i] = startNumber++;
}
}

void ShowTable(int* table,int _size){
    for(int i=0; i<_size;i++){
        cout<<table[i]<<" ";
    }
    cout<<endl;

}
