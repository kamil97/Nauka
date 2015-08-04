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

    Wojownik(int _sila, int _zrecznosc, int _hp, string _imie)
    {
      sila = _sila;
      zrecznosc = _zrecznosc;
      hp = _hp;
      imie = _imie;
    }

    //Metody
    void Przedstaw_sie()
    {
        cout <<"nazywam sie "<<imie<<endl;
    }

    bool Wejsc_na_konia(int wysokosc_konia)
    {
        if(wysokosc_konia>zrecznosc)
        {
            return false;
        }else
        {
            return true;
        }
    }

void Zycie()
{
    cout <<imie<<"zycie= "<<hp<<endl;
}

void Uderz(Wojownik przeciwnik)
{
    przeciwnik.Zycie();
    if(przeciwnik.zrecznosc < this->zrecznosc)
    {
        przeciwnik.hp = przeciwnik.hp - this->sila;
    }else
    {
        przeciwnik.hp = przeciwnik.hp- this-> sila/2;
    }
przeciwnik.Zycie();
}




};



int main()
{
    Wojownik mirek("mirek"); //wywolanie konstruktora
    Wojownik czesio("Czeslaw");

    mirek.Przedstaw_sie();
    czesio.Przedstaw_sie();

    //zagwostka
    mirek = czesio;
    mirek.Przedstaw_sie();


    Wojownik kamil(10,15,20,"kamil");

    cout << "wsiada na konia: "<<kamil.Wejsc_na_konia(5)<<endl;

    cout << "wsiada na konia: "<<kamil.Wejsc_na_konia(30)<<endl;


    Wojownik pawel(5,20,14,"lancelot pawel");
    kamil.Uderz(pawel);
    pawel.Uderz(kamil);
    return 0;
}
