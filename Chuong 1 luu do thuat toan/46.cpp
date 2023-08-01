#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d = 0, n, t;
    cin >> n;
    while(n > 0)
    {
        t = n%10;
        if(t%2 != 0)
        {
            d++;
        }
        n /= 10;
    }
    cout << d;
    return 0;
}
