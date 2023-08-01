#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 1, t, n;
    cin >> n;
    while(n > 0)
    {
        t = n%10;
        if(t%2 != 0)
        {
            s *= t;
        }
        n /= 10;
    }
    cout << s;
    return 0;
}
