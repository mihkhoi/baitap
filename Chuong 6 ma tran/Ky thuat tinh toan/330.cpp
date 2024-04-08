#include<bits/stdc++.h>
using namespace std;

void input(double a[100][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
}

int transmit(double a[][100], int n, int m, double b[100])
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            b[d++] = a[i][j];
        }
    }
    return d;
}

void transmit1(double a[][100], int n, int m, double b[100])
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            a[i][j] = b[d++];
        }
    }
}

void solve(double b[], int d)
{

}

int main()
{
    double a[100][100], b[100];
    int n, m, d;
    cin >> n;
    cin >> m;
    input(a, n, m);
    d = transmit(a, n, m, b);
    return 0;
}
