#include <iostream>
#include <math.h>

using namespace std;

double Pitagoras(double a, double b)
{
    double c;
    c = a*a+b*b;  //tu jest c^2
    c=sqrt(c); //tu juz c
    return c;


}

struct Punkt
{
    double x;
    double y;

    //konstruktory sa funkcjami ktore tworza obiekty
    Punkt()
    {
        x=0;
        y=0;
    }
    Punkt(double _x, double _y)
    {
        x = _x;
        y = _y;
    }

    double oblicz_odleglosc_do(Punkt B)
    {

        double delta_x;
        double delta_y;

        delta_x= this -> x - B.x;
        delta_y = this -> y - B.y;
        return Pitagoras(delta_x, delta_y);
    }

};




int main()
{
    Punkt a(2,5);
    Punkt b(3,4);

    cout << a.oblicz_odleglosc_do(b)<<endl;
    cout << a.oblicz_odleglosc_do(a);
    return 0;
}
