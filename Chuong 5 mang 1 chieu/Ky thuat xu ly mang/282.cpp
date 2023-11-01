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
        cout << a[i] <<  " ";
    }
}

void add(int a[], int n, int k , int x)
{
    for(int i = k;i > 0;i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = x;
}

void solve(int a[], int n )
{
    for(int i = 0;i < n;i++)
    {
        if(a[i]%3 == 0)
        {
            add(a, n, i, a[i]);
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
