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
    while(n > 0)
    {
        t = n%10;
        d++;
        n /= 10;
    }
    while(n1 > 0)
    {
        t1 = n1%10;
        if(t1%2 != 0)
        {
            c++;
        }
        n1 /= 10;
    }
    if(d == c)
    {
        return true;
    }
    return false;
}

void solve(int a[], int n)
{
    int max = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    if(check(max) == true)
    {
        cout << max;
    }       
    else
    {
        cout << "0";
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
