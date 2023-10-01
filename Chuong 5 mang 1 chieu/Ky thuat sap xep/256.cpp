#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    solve(a, n);
    output(a, n);
    return 0;
}
