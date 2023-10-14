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
        for(int j = i + 1;j < n;j++)
        {
            if(a[i] == a[j])
            {
                del(a, m, j);
                i -= 1;
                n -= 1;
                d++;
            }
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
