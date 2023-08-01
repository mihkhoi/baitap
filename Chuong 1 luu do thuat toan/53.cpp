#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, d = 1, max = 0;
    cin >> n;
    while(n > 0)
    {
        t = n%10;
        if(t > max)
        {
            max = t;
            if(max == t)
            {
                d++;
            }
        }
        n /= 10;
    }
    cout << max <<  " " << d;
    return 0;
}
