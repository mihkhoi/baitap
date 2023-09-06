#include<bits/stdc++.h>
using namespace std;

void intput(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(int n)
{
    int t;
    while(n > 0)
    {
        t = n%10;
        n /= 10;
    }
    return t%2 == 0? true : false;
}

int solve(int a[], int n)
{
    int s = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            s += a[i];
        }
    }
    return s;
}

int main()
{
    int a[100], n;
    cin >> n;
    intput(a, n);
    cout << solve(a, n);
    return 0;
}
