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
    if(s == 1)
    {
        return false;
    }
    if(s == n)
    {
        return true;
    }
    return false;
}

int solve(int a[], int n)
{
    int min = a[n - 1], d = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]))
        {
            if(a[i] < min)
            {
                d++;
                min = a[i];
            }
        }
    }
    if(d == 0)
    {
        return 0;
    }
    return min;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
                
