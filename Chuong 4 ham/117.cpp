#include<bits/stdc++.h>
using  namespace std;

int solve(int n, int s, int x)
{
    for(int i = 1;i <= n;i++)
    {
        s += pow(x, i);
    }
    return s;
}

int main()
{
    int n, x, s = 0;
    cin >> x >> n;
    cout << solve(n, s, x);
    return 0;
}
