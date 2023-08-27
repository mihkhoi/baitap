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
    if(pow(sqrt(n), 2) == n)
    {
        return true;
    }
    if(n == 1)
    {
        return false;
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
