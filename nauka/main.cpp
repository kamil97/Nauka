#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void FillTable(int* table, int _size);
void ShowTable(int* table, int _size);

int main()
{
    int tab[5];

    FillTable(tab,5);
    ShowTable(tab,5);

    return 0;
}


void FillTable(int* table, int _size){
    srand(time(NULL)); // podaje ziarno dla funkcji rand()
    for(int i=0;i<_size;i++){
        table[i] = rand()%100;
    }
}

void ShowTable(int* table,int _size){
    for(int i=0; i<_size;i++){
        cout<<table[i]<<" ";
    }
    cout<<endl;
}
