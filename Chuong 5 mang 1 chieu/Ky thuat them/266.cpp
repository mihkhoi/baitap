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

void solve(int a[], int n, int k, int x)
{
    for(int i = n + 1;i > k;i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    int k, x;
    cin >> k >> x;
    solve(a, n, k , x);
    output(a, n + 1);
    return 0;
}
