#include <iostream>

using namespace std;



int SilniaIteracyjna(int a)
{
    int silnia=1;
    for(int i=1; i<=a; i++)
    {
        silnia=silnia*i;

    }return silnia;
}




int SilniaRekurencyjna(int a)
{
    if( a>1)
    {
        return a*SilniaRekurencyjna(a-1);
    }else
    {
        return 1;
    }
}





int Cloatz(int k)
{
    static int wywolania = 0;
    cout<<"clo: "<< wywolania++<<" K: "<<k<<endl;
    if(k==1)
    {
        return 1;
    }

    if(k%2==0)
    {
        return Cloatz(k/2);
    }else if(k%2!=0)
    {
        return Cloatz(3*k+1);
    }


}


int SortowanieTablicy(int* tablica, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        for( int j = 0; j < rozmiar - 1; j++ )
        {
            if(tablica[j]>tablica[j+1])
                 swap( tablica[ j ], tablica[ j + 1 ] );
        }
    }
}


int SzukajElementu(int* tablica, int rozmiar, int szukany_element)
{
    for(int i=0; i<rozmiar; i++)
    {
        if(szukany_element==tablica[i])
        {
            return i;
        }
    }
}






int main()
{
    int a=5;
    cout << SilniaIteracyjna(a)<<endl;

    int b= 10;
    cout << SilniaRekurencyjna(a)<<endl;
    cout << SilniaRekurencyjna(10)<<endl;

    int c = 6;
    cout << Cloatz(c) << endl;

    int rozmiar = 15;
    int tablica[rozmiar];

    cout <<SortowanieTablicy(tablica,rozmiar);
    cout<<SzukajElementu(tablica,rozmiar);


    return 0;


}
