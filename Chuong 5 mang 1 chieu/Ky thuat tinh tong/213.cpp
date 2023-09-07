#include<bits/stdc++.h>
using namespace std;

void input(double a[], int n)
{
    for(int i = 0 ;i < n;i++)
    {
        cin >> a[i];
    }
}

double solve(double a[], int n)
{
    double x, s = 0;
    cin >> x;
    for(int i = 0;i < n;i++)
    {
        if(a[i] > x)
        {
            s += a[i];
        }
    }
    return s;
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    input(a, n);
    cout << solve(a, n);
    return 0;
}
