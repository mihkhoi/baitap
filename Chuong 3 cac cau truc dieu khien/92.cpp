#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, max = 0;
    cin >> a >> b;
    for(int i = 1;i <= a;i++)
    {
        if(a%i == 0)
        {
            c = i;
        }
        for(int j = 1;j <= b;j++)
        {
            if(b%j == 0)
            {
                d = j;
                
            }
            if(c == d)
            {
                e = c;
                if(e > max)
                {
                    max = e;
                }
            }
        }
    }
    cout << max;
    return 0;
}
