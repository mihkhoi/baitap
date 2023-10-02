#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
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
        c[d++] = b[j];
    }
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
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
    solve(c, x);
    output(c, x);
    return 0;
}
