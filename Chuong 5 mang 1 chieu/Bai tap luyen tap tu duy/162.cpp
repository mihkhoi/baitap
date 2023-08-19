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
    int r = -1;
    for(int i = 0;i < n;i++)
    {
        if((a[0] * a[n - 1]) == a[i])
        {
            r = i;
        }
    }
    return r;
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
