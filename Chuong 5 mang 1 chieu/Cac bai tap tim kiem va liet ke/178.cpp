#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n, int x, int y)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
        {
            if(a[i] > x && a[i] < y)
            {
                cout << a[i] << " ";
            }
        }
    }
}

int main()
{
    int a[100], n, x, y;
    cin >> n;
    nhap(a, n);
    cin >> x >> y;
    solve(a, n, x, y);
    return 0;
}
