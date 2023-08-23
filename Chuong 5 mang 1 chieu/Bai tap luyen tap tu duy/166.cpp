#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int solve(int a[], int n)
{
    int t, r;
    for(int i = 0;i < n;i++)
    {
        t = pow(2, i);
        for(int j = 0;j < n;j++)
        {
            if(t == a[i])
            {
                r = a[i];
                break;
            }
        }
    }
    return r;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
