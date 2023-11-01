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

void output(double a[][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(double a[][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m - 1;j++)
        {
            for(int k = j + 1;k < m;k++)
            {
                if(a[i][j] > a[i][k])
                {
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
}

int main()
{
    double a[100][100];
    int n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    solve(a, n, m);
    output(a, n, m);
    return 0;
}
