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
    int t, n1, t1, d = 0, c = 0;
    n1 = n;
    while(n1 > 0)
    {
        t1 = n1%10;
        d++;
        n1 /= 10;
    }
    while(n > 0)
    {
        t = n%10;
        if(t%2 != 0)
        {
            c++;
        }
        n /= 10;
    }
    if(d == c)
    {
        return true;
    }
    return false;
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    solve(a, n);
    return 0;
}
