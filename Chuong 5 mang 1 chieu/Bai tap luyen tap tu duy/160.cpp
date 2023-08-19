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
    double min = a[n - 1], r = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            if(a[i] < min)
            {
                min = a[i];
                r = min;
                break;
            }
        }
    }
    if(r == -1)
    {
        return 0;
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
