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
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[i] == b[j])
            {
                break;
            }
            cout << b[j] << " ";
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
    return 0;
}
