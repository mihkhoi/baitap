#include<bits/stdc++.h>
using namespace std;

void input(double a[][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
}

double solve(double a[][100], int n, int m)
{
    double s = 1;
    double d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            s *= a[i][j];
            d++;
        }
    }
    return s/d;
}

int main()
{
    double a[100][100];
    int n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    cout << solve(a, n, m);
    return 0;
}
