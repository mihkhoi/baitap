#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0 ;i < n;i++)
    {
        cin >> a[i];
    }
}

int solve(int a[], int n)
{
    int max = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
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
