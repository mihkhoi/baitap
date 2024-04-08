#include<bits/stdc++.h>
using namespace std;

void input(int a[][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
}

bool check(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int solve(int a[][100], int n, int m)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(check(a[i][j]))
            {
                d++;
            }
        }
    }
    return d;
}

int main()
{
    int a[100][100], n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    cout << solve(a, n, m);
    return 0;
}
