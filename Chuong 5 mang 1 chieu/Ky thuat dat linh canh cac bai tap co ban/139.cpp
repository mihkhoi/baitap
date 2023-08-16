#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(int n)
{
    int s = 0;
    for(int i = 1;i < n;i++)
    {
        if(n%i == 0)
        {
            s += i;
        }
    }
    if(s == n)
    {
        return true;
    }
    return false;
}

int solve(int a[], int n)
{
    int vt = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            vt = a[i];
            break;
        }
    }
    return vt;
}

int solve1(int a[], int n)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        if(solve(a, n) == a[i])
        {
            d = i;
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
    cout << solve1(a, n);
    return 0;
}
