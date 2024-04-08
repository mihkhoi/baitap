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

double solve(double a[][100], int n, int m, int vt)
{
    double s = 0;
    for(int i = vt;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            s += a[i][j];
        }
        break;
    }
    return s;
}

int main()
{
    double a[100][100];
    int n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    int vt;
    cin >> vt;
    cout << solve(a, n, m, vt);
    return 0;
}
