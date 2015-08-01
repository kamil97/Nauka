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









int main()
{
    int a=5;
    cout << SilniaIteracyjna(a)<<endl;

    int b= 10;
    cout << SilniaRekurencyjna(a)<<endl;
    cout << SilniaRekurencyjna(10)<<endl;

    int c = 6;
    cout << Cloatz(c) << endl;


    return 0;


}
