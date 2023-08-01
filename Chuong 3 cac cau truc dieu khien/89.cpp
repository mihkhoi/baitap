#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 0, n, m;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(i%2 != 0)
        {
            s += i;
            if(s < n)
            {
                m = s;
            }
        }
    }
    cout << m;
    return 0;
}
