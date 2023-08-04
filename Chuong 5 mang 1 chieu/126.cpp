#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], double n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

double solve(double a[], double n)
{
    double s = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            s += a[i];
        }
    }
    return s;
}

int main()
{
    double a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
