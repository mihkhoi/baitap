#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, min = 10000;
    cin >> n;
    while(n > 0)
    {
        t = n%10;
        if(t < min)
        {
            min = t;
        }
        n /= 10;
    }
    cout << min;
    return 0;
}
