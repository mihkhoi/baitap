#include<bits/stdc++.h>
using namespace std;

void input(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
}

void del(double a[], int n, int k)
{
    for(int i = k;i < n - 1;i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void solve(double a[], int n)
{
    int d = 0;
    int m = n;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            del(a, m, i);
            d++;
            i = i - 1;
            n = n - 1;
        }
    }
    output(a, m - d);
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    input(a, n);
    solve(a, n);
    return 0;
}
