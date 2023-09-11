#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int b[], int n)
{
    int max = 0;
    int dem = 0;
    for(int i = 0;i < 100;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i == a[j])
            {
                dem++;
            }
        }
        b[i] = dem;
        dem = 0;
    }
    for(int i = 0;i < 100;i++)
    {
        if(b[i] > max)
        {
            max = b[i];
        }
    }
    for(int i = 0;i < 100;i++)
    {
        if(b[i] == max)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a[100], b[100], n;
    cin >> n;
    input(a, n);
    solve(a, b, n);
    return 0;
}
