#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int max(int a[], int n)
{
    int max = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
        {
            if(a[i] > max)
            {
                max = a[i];
            }
        }
    }
    return max;
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(max(a, n) == a[i])
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
