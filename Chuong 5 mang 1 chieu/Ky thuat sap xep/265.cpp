#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void mix(int a[], int n, int b[100], int m, int c[])
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        c[d++] = a[i];
    }
    for(int j = 0;j < m;j++)
    {
        c[d++] = a[j];
    }
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if()
        }
    }
}

int main()
{
    int a[100], b[100], c[100], n, m, x;
    cin >> n;
    input(a, n);
    cin >> m;
    input(b, m);
    x = n + m;
    mix(a, n, b, m, c);

    return 0;
}
