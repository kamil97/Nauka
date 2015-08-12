#include <iostream>

using namespace std;

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
    return 0;
}
