#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

double solve(double a[], int n, double x)
{
    int s, min = 1000, vt = 0;
    for(int i = 0;i < n;i++)
    {
        s = a[i] - x;   
        if(s < 0)
        {
            s *= -1;
        }
        if(s < min)
        {
            min = s;
            vt++;
        }
    }
    return vt;
}

double solve1(double a[], int n, double x)
{
    int kq = 0;
    for(int i = 0;i < n;i++)
    {
        if(solve(a, n, x) == i)
        {
            kq = a[i];
        }
    }
    return kq;
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    nhap(a, n);
    double x;
    cin >> x;
    cout << solve1(a, n, x);
    return 0;
}
