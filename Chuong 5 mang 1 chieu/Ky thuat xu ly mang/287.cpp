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

void loop(int a[], int n, int x)
{
    for(int i = n - 1;i >= 1;i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = x;
}

void solve(int a[], int n, int m)
{
    for(int i = 0;i < m;i++)
    {
        for(int j = n - 1;j >= 0;j++)
        {
            loop(a, n, a[j]);
            break;
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    int m;
    cin >> m;
    solve(a, n, m);
    output(a, n);
    return 0;
}
