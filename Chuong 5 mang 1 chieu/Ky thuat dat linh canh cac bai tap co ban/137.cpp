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
    double min = a[0];
    int vt = 1;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

double solve1(double a[], int n)
{
    int vt;
    for(int i = 0;i < n;i++)
    {
        if(solve(a, n) == a[i])
        {
            vt = i;
        }
    }
    return vt;
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    nhap(a, n);
    cout << solve1(a, n);
    return 0;
}
