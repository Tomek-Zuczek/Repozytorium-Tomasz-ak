#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int nwd;

    cout << "Podaj liczbę a: " << endl;
    cin >> a;
    cout << "Podaj liczbę b: " << endl;
    cin >> b;
    

    while (a!=b) {

        if (a < b) 
        {
            b -= a;
        }

        else 
        {
            a -= b;
        }
        
    }
    nwd = a;
    cout << "Najwiekszy wspolny dzielnik: "<<nwd<< endl;



    int c = a * b;
    int nww;

    nww = c / a;
    cout << "Najwieksza wspolna wielokrotnosc: " << nww << endl;

    


    
}

