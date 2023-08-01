#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, t, y, d = 0, c = 0, min = 10;
    cin >> n;
    m = n;
    x = n;
    while(n > 0)
    {
        t = n%10;
        if(t <= min)
        {
            min = t;
            d++;
        }
        n /= 10;
    }
    while(m > 0)
    {
        y = m%10;
        c++;
        m /= 10;
    }
    if(d == c)
    {
        cout << "so nguyen duong " << x << " co tang dan tu trai sang phai";
    }
    else
    {
        cout << "so nguyen duong " << x << " khong tang dan tu trai sang phai";
    }
    return 0;
}
