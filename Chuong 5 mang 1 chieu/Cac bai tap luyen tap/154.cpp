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
    int vt = -1, max = -1000;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            if(a[i] > max)
            {
                max = a[i];
                vt = i;
            }
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
    cout << solve(a, n);
    return 0;
}
