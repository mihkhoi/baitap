#include<bits/stdc++.h>
using namespace std;

int solve(int n, int s)
{
    for(int i = 1;i <= n;i++)
    {
        s += i;
    }
    return s;
}

int main()
{
    int n, s = 0;
    cin >> n;
    cout << solve(n, s);
    return 0;
}
