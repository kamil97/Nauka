#include <iostream>

using namespace std;


bool zamien_cyfre_na_kropke(string &zamiana)
{
    bool zamiana_nastapila=false;
    for(int i=0; i<zamiana.size(); i++)
    {
        if((zamiana[i]>='0')&&(zamiana[i]<='9'))// dwa nawiasy
        {
            zamiana[i]='.';
            zamiana_nastapila=true;
        }

    }
    return zamiana_nastapila;
}












int main()
{
    string str = "abcdef";

    cout << "to bedzie enter \nnowa linia ";

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]== 'b'){
            cout << "MAMY B ";
        }
        if(str[i]>= 'e'){
            cout << "WIEKSZE E ";
        }
    if(str[i]==0x61){
            cout << " ";
        }
        cout << str[i]<<endl;
    }

    cout <<endl;
    string test1="asdf1234mmnbv6jk";
    string test2 = "1234567";
    string test3 = "blhoglhhj";
    cout<<test1<<endl;
    cout <<test2<<endl;
    cout<<test3<<endl;
    cout<<zamien_cyfre_na_kropke(test1)<<endl;
    cout<<zamien_cyfre_na_kropke(test2)<<endl;
    cout<<zamien_cyfre_na_kropke(test3)<<endl;
    cout <<test1<<endl;
    cout <<test2<<endl;
    cout<<test3<<endl;

    return 0;
}








