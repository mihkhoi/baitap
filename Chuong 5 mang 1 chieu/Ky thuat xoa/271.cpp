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

void solve(int a[], int n, int k)
{
    for(int i = k;i < n - 1;i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    int k;
    cin >> k;
    solve(a, n, k);
    output(a, n - 1);
    return 0;
}
