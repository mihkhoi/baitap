#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
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
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        if(check(a[i]) == true)
        {
            b[d++] = a[i];
        }
    }
    return d;
}

int main()
{
    int a[100], b[100], n, m;
    cin >> n;
    input(a, n);
    m = solve(a, b, n);
    output(b, m);
    return 0;
}
