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
    if(n < 2)
    {
        return false;
    }
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int solve(int a[], int b[], int n)
{
    int d = 0, c = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            for(int j = 0;j < 100;j++)
            {
                b[j] = a[i];
                c++;
            }
        }
    }
    for(int i = 0;i < c;i++)
    {
        if(b[i] == b[i + 1])
        {
            continue;
        }
        d++;
    }
    return d;
}

int main()
{
    int a[100], b[100], n;
    cin >> n;
    input(a, n);
    cout << solve(a, b, n);
    return 0;
}
