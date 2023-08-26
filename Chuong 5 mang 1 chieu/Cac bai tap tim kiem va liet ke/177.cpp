#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(double a[], int n, int x, int y)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i] > x && a[i] < y)
        {
            cout << a[i];
        }
    }
}

int main()
{
    double a[100], x, y;
    int n;
    cin >> n;
    nhap(a, n);
    cin >> x >> y;
    solve(a, n, x, y);
    return 0;
}
