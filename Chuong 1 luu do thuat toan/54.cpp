#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, d = 1, min = 1000;
    cin >> n;
    while(n > 0)
    {
        t = n%10;
        //if(min == t)
        //{
        //    d++;
        //}
        if(t < min)
        {
            min = t;
            if(min == t)
            {
                d++;
            }
        }
        n /= 10;
    }
    cout << min << " " << d;
    return 0;
}
