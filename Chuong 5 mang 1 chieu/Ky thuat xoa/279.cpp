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
        b[a[i]]++;
    }
    int index = 0;
    for(int i = 0;i < n;i++)
    {
        if(b[a[i]] == 1)
        {
            a[index++] = a[i];
        }
    }
    n = index;
    output(a, n);
}

int main()
{
    int a[100], b[100], n;
    cin >> n;
    input(a, n);
    solve(a, b, n);
    return 0;
}
