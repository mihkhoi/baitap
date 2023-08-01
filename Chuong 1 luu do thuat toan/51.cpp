#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, max = 0;
    cin >> n;
    while(n > 0)
    {
        t = n%10;
        if(t > max)
        {
            max = t;
        }
        n /= 10;
    }
    cout << max;
    return 0;
}
