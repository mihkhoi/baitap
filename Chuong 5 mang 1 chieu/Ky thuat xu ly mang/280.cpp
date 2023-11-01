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

void add(int a[], int n, int k)
{
    for(int i = k;i > 0;i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = 1;
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i] == 1)
        {
            add(a, n, i);
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    solve(a, n);
    output(a, n);
    return 0;
}
