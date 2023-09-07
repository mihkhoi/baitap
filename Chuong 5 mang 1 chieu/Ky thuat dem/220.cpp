#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0 ;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(int n)
{
    int t;
    t = n%10;
    n /= 10;
    if(t == 5)
    {
        return true;
    }
    return false;
}

int solve(int a[], int n)
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
    int a[100], n;
    cin >> n;
    input(a, n);
    cout << solve(a, n);
    return 0;
}
