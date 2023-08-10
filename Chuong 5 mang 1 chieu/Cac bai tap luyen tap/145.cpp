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
    else if(s == 1)
    {
        return false;
    }
    return false;
}

int solve(int a[], int n)
{
    int htd = -1;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]))
        {
            htd = a[i];
            break;
        }
    }
    return htd;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
