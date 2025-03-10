#include<iostream>
using namespace std;
int main()
{

    int i, n;
    int isprime = 1;

    cout << "enter the number :";
    cin >> n;

    for (i = 2; i <= n / 2 + 1; i++)
    {

        if (n % i == 0)
        {
            isprime = 0;
            cout << "not a prime number";
            break;
        }
    }

    if (isprime == 1)
    {
        cout << "prime number";
    }
}















   