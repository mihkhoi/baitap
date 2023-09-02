#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        do
        {
            cin >> a[i];
        }while(a[i] < 10);
    }
}

bool check(int n)
{
    int t;
    for(int i = 0;i < 2;i++)
    {
        t = n%10;
        n /= 10;
    }
    if(t == 5)
    {
        return true;
    }
    return false;
}

int solve(int a[], int n)
{
    int s = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            s += a[i];
        }
    }
    return s;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
