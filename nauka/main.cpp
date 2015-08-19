#include <iostream>

using namespace std;



struct Stos
{
    int Tablica[1000];
    int index=0;

   void Push(int a)
   {
       Tablica[index++]=a; //postinkrementacja
   }

   int Pop()
   {
       return Tablica[--index];//predekrementacja
   }


   void showAll()
   {
       for(int i=0; i<index; i++)
       {
           cout <<Tablica[i] <<" ";
       }
       cout <<endl;
   }


};

int main()
{

    Stos stosik;

    stosik.Push(4);
    stosik.Push(6);
    stosik.Push(2);
    stosik.Push(8);
    stosik.showAll();
    cout<< "pop: "<<stosik.Pop()<<endl; //8
    cout<< "pop: "<<stosik.Pop()<<endl; //2
    stosik.showAll(); // 4 6
    stosik.Push(9);
    stosik.Push(5);
    cout<< "pop: "<<stosik.Pop()<<endl; //5

    return 0;
}
