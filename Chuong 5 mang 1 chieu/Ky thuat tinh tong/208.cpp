#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(double n)
{
    if(n == 1)
    {
        return false;
    }
    if(pow(sqrt(n), 2) == n)
    {
        return true;
    }
    return false;
}


double solve(double a[], int n)
{
    int s = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i] == true))
        {
            s += a[i];
        }
    }
    return s;
}


int main()
{
    double a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
