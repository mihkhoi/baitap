#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, max = 0, d = 0, c = 0, t, y;
    cin >> n;
    x = m = n;
    while(n > 0)
    {
        t = n%10;
        if(t >= max)
        {
            max = t;
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
    cout << "so nguyen duong " << x << " co giam tu trai sang phai khong?" << endl;
    if(d == c)
    {
        cout << "co";
    }
    else
    {
        cout << "khong";
    }
    return 0;
}
