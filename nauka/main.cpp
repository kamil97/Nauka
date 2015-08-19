#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //zapisywanie

    ofstream plik_wyjscia;
    plik_wyjscia.open("plik_wyjscia.txt"); //nazwa pliku
    plik_wyjscia << "sprawdzenie"<<endl;
    int a = 2;
    double c = 1.20;
    plik_wyjscia << "a. "<<a<<endl;
    plik_wyjscia << "c "<< c<<endl;
    plik_wyjscia.close();

    //wczytywanie

    ifstream plik_wejscia;
    plik_wejscia.open("plik.txt");
    string linia;
    int b;
    plik_wejscia>>linia;
    cout << linia;
    plik_wejscia >> a;
    cout << a <<endl;


    cout << "Hello world!" << endl;
    return 0;
}
