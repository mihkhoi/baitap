#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int check(int n)
{
    int n1 = n, t;
    while(n1 > 0)
    {
        t = t*10 + n1%10;
        n1 /= 10;
    }
    if(n == t)
    {
        return 1;
    }
    return 0;
}

int solve(int a[100], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == 1)
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
