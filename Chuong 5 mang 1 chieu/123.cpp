#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
}

int solve(int a[], int n)
{
    int min = a[0], vt;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < min)
        {
            vt = i;
        }
    }
    return vt;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    cout << endl;
    cout << solve(a, n);
    return 0;
}
