#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    int d = 0;
    for(int i = 0;i <= 100;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i == a[j])
            {
                d++;
            }
        }
        if(d > 0)
        {
            cout << i << "-" << d << " ";
            d = 0;
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    solve(a, n);
    return 0;
}
