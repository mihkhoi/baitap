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
    int d = 0,  c = 0;
    for(int i = n - 1;i > 0;i--)
    {
        for(int j = i - 1;j > 0;j--)
        {
            if(a[i] > a[j])
            {
                d++;
            }
        }
        if(d == i - 1)
        {
            c++;
            d = 0;
        }
    }
    return c;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    cout << solve(a, n);
    return 0;
}
