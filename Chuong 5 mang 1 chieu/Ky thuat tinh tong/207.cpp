#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int solve(int a[], int n)
{
    int s = 0;
    for(int i = 1;i < n - 1;i++)
    {
        if((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]))
        {
            s += a[i];
        }
    }
    if(a[0] > a[1] || a[0] < a[1])
    {
        s += a[0];
    }
    if(a[n - 1] > a[n - 2] || a[n - 1] < a[n - 2])
    {
        s += a[n - 1];
    }
    return s;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
