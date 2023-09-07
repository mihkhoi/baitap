#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int solve(int a[], int n)
{
    int d = 0;
    for(int i = 1;i < n;i++)
    {
        if((a[i] > a[i -1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]))
        {
            d++;
        }
    }
    if(a[0] > a[1] || a[0] < a[1])
    {
        d += 1;
    }
    else if(a[n - 1] > a[n - 2] || a[n - 1] < a[n - 2])
    {
        d += 1;
    }
    return d;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    cout << solve(a, n);
    return 0;
}
