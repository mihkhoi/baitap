#include<bits/stdc++.h>
using namespace std;

void input(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
}

int solve(double a[], double b[], int n)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            b[d++] = a[i];
        }
    }
    return d;
}

int main()
{
    double a[100], b[100];
    int n, m;
    cin >> n;
    input(a, n);
    m = solve(a, b, n);
    output(b, m);
    return 0;
}
