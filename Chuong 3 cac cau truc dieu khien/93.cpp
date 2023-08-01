#include<bits/stdc++.h>
using namespace std;

bool Isprime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, d = 0;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)
        {
            d++;
        }
    }
    if(d <= 2)
    {
        cout << "Is prime" << endl;
    }
    cout << Isprime(n);
    return 0;
}
