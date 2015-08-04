#include <iostream>

using namespace std;

struct Wojownik
{
    //POLA
    int hp;
    int sila;
    int zrecznosc;
    string imie;

    //Konstruktor
    Wojownik()
    {
        hp =0;
        sila=0;
        zrecznosc=0;
        imie = "";
    }

    Wojownik(string _imie)
    {
        imie = _imie;
    }

    //Metody
    void Przedstaw_sie()
    {
        cout <<"nazywam sie "<<imie<<endl;
    }

};



int main()
{
    Wojownik mirek("mirek"); //wywolanie konstruktora
    Wojownik czesio("Czeslaw");

    mirek.Przedstaw_sie();
    czesio.Przedstaw_sie();

    return 0;
}
