#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t, t1, t2, max = 0;
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)
        {
            t = i;
        }
        for(int j = 1;j <= m;j++)
        {
            if(m%j == 0)
            {
                t1 = j;
            }
            if(t == t1)
            {
                t2 = t;
                if(t2 > max)
                {
                    max = t2;
                }
            }
        }
    }
    cout << "UCLN(" << n << ", " << m << ")" << " = " << max;
    return 0;
}
