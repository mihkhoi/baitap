#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, t, y, d = 0, c = 0;
    cin >> n;
    m = n;
    x = n;
    while(n > 0)
    {
        t = n%10;
        d++;
        n /= 10;
    }
    while(m > 0)
    {
        y = m%10;
        if(y%2 != 0)
        {
            c++;
        }
        m /= 10;
    }
    if(c == d)
    {
        cout << "so nguyen duong " << x << " toan chu so le" << endl;
    }
    else
    {
        cout << "so nguyen duong " << x << " khong toan chu so le" << endl;
    }
    system("pause");
    return 0;
}
