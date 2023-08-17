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
    if(n < 2)
    {
        return false;
    }
    for(int i = 2;i < sqrt(n);i++)
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
    int max = a[0], d = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]))
        {
            if(a[i] > max)
            {
                max = a[i];
                d++;
            }
        }
    }
    if(d == 0)
    {
        return 0;
    }
    return max;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
