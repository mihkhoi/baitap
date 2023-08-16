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
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] > d)
        {
            d = a[i];
            break;
        }
        else
        {
            return -1;
        }
    }
    return d;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
