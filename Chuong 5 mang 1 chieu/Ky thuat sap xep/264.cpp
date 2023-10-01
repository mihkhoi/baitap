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

void mix(int a[], int n, int b[], int m, int c[])
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

void solve(int c[], int x)
{
    for(int i = 0;i < x;i++)
    {
        for(int j = i + 1;j < x;j++)
        {
            if(c[i] > c[j])
            {
                swap(c[i], c[j]);
            }
        }
    }
}

int main()
{
    int a[100], b[100], n, m, c[100], x;
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
