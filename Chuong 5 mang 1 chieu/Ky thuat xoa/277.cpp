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

void del(int a[], int n, int k)
{
    for(int i = k;i < n - 1;i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void solve(int a[], int n)
{
    int d = 0, m = n;
    for(int i = 0;i < n;i++)   
    {
        if(check(a[i]) == true)
        {
            del(a, m, i);
            i -= 1;
            n -= 1;
            d++;
        }
    }
    output(a, m - d);
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    solve(a, n);
    return 0;
}
