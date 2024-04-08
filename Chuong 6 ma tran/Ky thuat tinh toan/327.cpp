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

int solve(int a[][100], int n, int m)
{
    int s = 0, s1 = 0;
    int s2 = 0, s3 = 0;
    for(int i = 0;i < n;i++)
    {
        s += a[0][i];
        s1 += a[n - 1][i];
    }
    for(int j = 0;j < m;j++)
    {
        s2 += a[j][0];
        s3 += a[j][m - 1];
    }
    return s + s1 + s2 + s3;
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
