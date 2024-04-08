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
    int s = 0;
    for(int i = 1;i < n;i++)
    {
        if(n%i == 0)
        {
            s += i;
        }
    }
    if(s == n)
    {
        return true;
    }
    return false;
}

int solve(int a[][100], int n, int m)
{
    int s = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(check(a[i][j]))
            {
                s += a[i][j];
            }
        }
    }
    return 0;
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
