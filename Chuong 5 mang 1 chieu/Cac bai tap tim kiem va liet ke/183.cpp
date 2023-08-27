#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(double a[], int n)
{
    int max = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
        }
    }
    for(int i = 0;i < n;i++)
    {
        if(max == a[i])
        {
            cout << i << " ";
        }
    }
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    nhap(a, n);
    solve(a, n);
    return 0;
}
