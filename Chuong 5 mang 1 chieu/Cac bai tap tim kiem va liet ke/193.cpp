#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j  = 1;j <= n;j++)
        {
            if(a[i] == pow(3, j))
            {
                d++;  
            }
        }
    }
    if(d == n)
    {
        cout << "0";
    }
    else
    {
        cout << "1";
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
