#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    int max = a[0], t, t1 = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    for(int i = 0;i < n;i++)
    {
        t = pow(5, i);
        for(int j = 0;j < n;j++)
        {
            if(t == max)
            {
                t1 = max;
                break;
            }
        }
    }
    cout << t1;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    solve(a, n);
    return 0;
}
