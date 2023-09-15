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
    int t, n1, t1 = 0;
    n1 = n;
    while(n > 0)
    {
        t = n%10;
        t1 = t1*10 + t;
        n /= 10;
    }
    if(t1 == n1)
    {
        return true;
    }
    return false;
}

double solve(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) != true)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    double a[100], n;
    cin >> n;
    input(a, n);
    cout << solve(a, n);
    return 0;
}
