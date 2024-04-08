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

int solve(int a[][100], int n, int m, int vt)
{
    int s = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = vt;j < m;j++)
        {
            if(a[i][j]%2 != 0)
            {
                s += a[i][j];
            }
            break;
        }
    }
    return s;
}

int main()
{
    int a[100][100], n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    int vt;
    cin >> vt;
    cout << solve(a, n, m, vt);
    return 0;
}
