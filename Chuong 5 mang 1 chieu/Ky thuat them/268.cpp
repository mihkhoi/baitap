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

void solve(int a[], int b[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
        {
            b[i] = 0;
        }
        else
        {
            b[i] = 1;
        }
    }
}

int main()
{
    int a[100], b[100], n;
    cin >> n;
    input(a, n);
    solve(a, b, n);
    output(b, n);
    return 0;
}
