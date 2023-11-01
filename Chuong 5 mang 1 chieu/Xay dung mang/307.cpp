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

int solve(int a[], int b[], int n)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 != 0)
        {
            b[d++] = a[i];
        }
    }
    return d;
}

int main()
{
    int a[100], b[100], n;
    cin >> n;
    input(a, n);
    int m;
    m = solve(a, b, n);
    output(b, m);
    return 0;
}
