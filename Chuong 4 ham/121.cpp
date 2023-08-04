//tim cac so armstrong tu 1 den 1000000
//vd: 371 = (3*3*3) + (7*7*7) + (1*1*1)
//thuat toan;
//dau tien la dem tung chu so 
//roi dung thua toan s += pow(3, 3), pow(7, 3), pow(1, 3)
//roi so sanh xem co bang voi so luc dau khong
//neu bang thi dua ket qua ra man hinh
#include<bits/stdc++.h>
using namespace std;

int solve(int x, int n, int t, int m, int y, int d, int s)
{
    s = 0;
    d = 0;
    n = x;
    m = n;
    while(n > 0)
    {
        t = n%10;
        d++;
        n /= 10;
    }
    while(m > 0)
    {
        y = m%10;
        s += pow(y, d);
        m /= 10;
    }
    if(s == x)
    {
        return 1;
    }
    return -1;
}

int main()
{
    int n, t, m, y, d, s;
    for(int i = 1;i <= 1000000;i++)
    {
        if(solve(i, n, t, m, y, d, s) == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}
