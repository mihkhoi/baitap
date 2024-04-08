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

int solve(int a[][100], int n, int m, int x)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[i][j] == x)
            {
                d++;
            }
        }
    }
    return d;
}

int main()
{
    int a[100][100], n , m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    int x;
    cin >> x;
    cout << solve(a, n, m, x);
    return 0;
}
