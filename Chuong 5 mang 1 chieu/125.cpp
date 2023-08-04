#include<bits/stdc++.h>
#include <cmath>
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
    if(n < 2)
    {
        return false;
    }
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int solve(int a[], int n)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]))
        {
            if(a[i] < 100)
            {
                d++;
            }
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
