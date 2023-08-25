#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int tsnn(int a[], int n)
{
    int min = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int check(int a[], int n, int uc)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i]%uc != 0)
        {
            return false;
        }
    }
    return true;
}

int tucln(int a[], int n)
{
    for(int uc = tsnn(a, n);uc >= 1;uc--)
    {
        if(check(a, n, uc) == true)
        {
            return uc;
        }
    }
    return 1;
}

int main()
{
    int a[100], b[100], n;
    cin >> n;
    nhap(a, n);
    cout << tucln(a, n);
    return 0;
}
