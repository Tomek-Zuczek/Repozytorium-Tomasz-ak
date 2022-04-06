#include <iostream>
using namespace std;




bool main2(int n)
{
   

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if (n == 1)
            {
                return true;
            }
            else {
                return false;
            }
        }
    }
}

int main()
{
    int n,l, p,lp;
    

    
    cout << "Ile liczb pierwszych chcesz wygenerować: ";
    cin >> n;


    lp = 0;
    p = 2;
    bool isPrime;


    while (lp != n)
    {
        isPrime = main2(lp);
        if (isPrime) {
            cout << lp<<endl;

        }
        lp++;
    }

    

}