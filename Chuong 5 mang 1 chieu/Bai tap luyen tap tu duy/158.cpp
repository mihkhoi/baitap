#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i  < n; i++)
    {
        cin >> a[i];
    }
}

double max(double a[], int n)
{
    double max = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    if(max < 0)
    {
        max *= -1;
    }
    return max;
}

double min(double a[], int n)
{
    double min = a[n - 1];
    for(int i = 0;i < n;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    if(min < 0)
    {
        min *= -1;
    }
    return min;
}

double solve(double a[], int n)
{
    double x;
    if(max(a, n) > min(a, n))
    {
        x = max(a, n);
    }
    else
    {
        x = min(a, n);
    }
    return x;
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
