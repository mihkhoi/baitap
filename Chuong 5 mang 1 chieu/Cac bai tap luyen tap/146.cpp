#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int solve(double a[], int n)
{
    double ad = 1;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            ad = a[i];
            break;
        }
    }
    return ad;
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
