#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a [i];
    }
}

void solve(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            cout << i << " ";
        }
    }
}
    
int main()
{
    double a[100];
    int n;
    cin >> n;
    nhap(a, n);
    solve(a, n);
    return 0;
}
