#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(int n)
{
    int s = 0;
    if(n > 256)
    {
        for(int i = 1;i < n;i++)
        {
            if(n%i == 0)
            {
                s += i;
            }
        }
    }
    if(s == n)
    {
        return true;
    }
    return false;
}

int solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    cout << solve(a, n);
    return 0;
}
