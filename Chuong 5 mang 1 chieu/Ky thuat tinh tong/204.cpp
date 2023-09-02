#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

double solve(double a[], int n)
{
    double s = 0;
    for(int i = 1;i < n;i++)
    {
        if(a[i] > a[i - 1])
        {
            s += a[i];
        }
    }
    return s;
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
