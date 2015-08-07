#include <iostream>

using namespace std;

struct Wojownik
{
    //POLA
    int max_hp;
    int hp;
    int sila;
    int zrecznosc;
    string imie;

    //Konstruktor
    Wojownik()
    {
        max_hp=20;
        hp =20;
        sila=10;
        zrecznosc=5;
        imie = "";
    }

    Wojownik(string _imie)
    {
        imie = _imie;
    }

    Wojownik(int _sila, int _zrecznosc, int _hp, string _imie)
    {
        max_hp = _hp;
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
        }
        else
        {
            return true;
        }
    }

    void Zycie()
    {
        cout <<imie<<"zycie= "<<hp<<endl;
    }

//musi byc przekazany przez referencje bo chce zmienic stan przeciwnika
    void Uderz(Wojownik& przeciwnik)
    {
        przeciwnik.Zycie();
        if(przeciwnik.zrecznosc < this->zrecznosc)
        {
            przeciwnik.hp = przeciwnik.hp - this->sila;
        }
        else
        {
            przeciwnik.hp = przeciwnik.hp - (this-> sila/2);
        }
        przeciwnik.Zycie();
    }

    bool Czy_zyje()
    {
        if(hp>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


};

struct Medyk
{
    //pole
    int hp;
    int sila;
    int zrecznosc;
    int mana;
    string imie;

    //konstruktor
    Medyk()
    {
        hp = 10;
        sila = 5;
        zrecznosc = 3;
        mana = 50;
        imie ="";

    }
    Medyk(string _imie)// czemu to nie moze byc w kolejnej funkcji?
    {
        imie = _imie;
    }
    Medyk(int _hp, int _sila, int _zrecznosc, int _mana, string _imie)
    {
        sila = _sila;
        zrecznosc = _zrecznosc;
        hp = _hp;
        mana = _mana;
        imie = _imie;
    }

    //metody

    void wskrzes(int hp)
    {
        hp = 100;
    }

    void Ulecz(Wojownik& jego_okreslenie)
    {
        if(jego_okreslenie.Czy_zyje())
        {
            if(jego_okreslenie.hp < jego_okreslenie.max_hp)
            {
                jego_okreslenie.hp = jego_okreslenie.max_hp;
            }
        }

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
    Medyk romek;
    do
    {
        cout <<"=============="<<endl;
        kamil.Uderz(pawel);
        pawel.Uderz(kamil);
        romek.Ulecz(pawel);
        //kamil.Uderz(romek);//


    }
    while(kamil.Czy_zyje()&& pawel.Czy_zyje());

    return 0;
}
