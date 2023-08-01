#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t, y, d = 0;
    cin >> n;
    m = n;
    while(n > 0)
    {
        t = n%10;
        n /= 10;
    }
    while(m > 0)
    {
        y = m%10;
        if(t == y)
        {
            d++;
        }
        m /= 10;
    }
    cout << t << " " << d << endl;
    system("pause");
    return 0;
}
