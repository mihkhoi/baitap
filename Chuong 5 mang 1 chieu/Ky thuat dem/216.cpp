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
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
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
