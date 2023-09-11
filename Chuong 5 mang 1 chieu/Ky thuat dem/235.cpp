#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int b[], int n, int m)
{
    int vt = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[i] == b[j])
            {
                break;
            }
            vt++;
        }
        if(vt == m)
        {
            cout << a[i] << " ";
        }
    }
}

void solve1(int b[], int a[], int m, int n)
{
    int vt = 0;
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(b[i] == a[j])
            {
                break;
            }
            vt++;
        }
        if(vt == n)
        {
            cout << b[i] << " ";
        }
    }
}

int main()
{
    int a[100], b[100], n, m;
    cin >> n;
    input(a, n);
    cin >> m;
    input(b, m);
    solve(a, b, n, m);
    cout << endl;
    solve1(b, a, m, n);
    return 0;
}
