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
    for(int i = 0;i < n - 1;i++)
    {
        if((a[i] < 0 && a[i + 1] < 0 && abs(a[i + 1]) > a[i]) || (a[i] > 0 && a[i + 1] > 0 && abs(a[i + 1]) > a[i]))
        {
            d++;
        }
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
