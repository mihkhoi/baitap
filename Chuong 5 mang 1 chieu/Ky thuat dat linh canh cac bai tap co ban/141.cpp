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
    double min = 1000;
    int vt = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] > 0)
        {
            if(a[i] < min)
            {
                min = a[i];
                vt = i;
            }
        }
        else
        {
            continue;
        }
    }
    if(vt == 0)
    {
        return -1;
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
