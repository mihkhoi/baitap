#include<bits/stdc++.h>
using namespace std;

void input(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(int n)
{
    double s = 0;
    for(int  i = 1;i < n;i++)
    {
        if(n%i == 0)
        {
            s += i;
        }
    }
    return s == n ? true : false;
}

double solve(double a[], int n)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            d++;
        }
    }
    return d;
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
