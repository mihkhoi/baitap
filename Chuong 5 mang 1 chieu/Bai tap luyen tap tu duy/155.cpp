#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void transmit(double a[], double b[], int n)
{
    for(int i  = 0;i < n;i++)
    {
        b[i] = a[i];
    }
}

double solve(double a[], int n, double x)
{
    int s, max = a[0] - x, vt = 0;
    for(int i = 0;i < n;i++)
    {
        s = a[i] - x;   
        if(s < 0)
        {
            s *= -1;
        }
        if(s > max)
        {
            max = s;
            vt++;
        }
    }
    return vt;
}

void solve1(double a[], double b[], int n)
{
    double x;
    cin >> x;
    for(int i = 0;i < n;i++)
    {
        if(solve(a, n, x) == i)
        {
            cout << b[i];
        }
    }
}

int main()
{
    double a[100], b[100];
    int n;
    cin >> n;
    nhap(a, n);
    transmit(a, b, n);
    solve1(a, b, n);
    return 0;
}
