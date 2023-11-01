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
        cout << a[i] <<  " ";
    }
}

void solve(int a[], int n)
{
    int max = a[0];
    int min = a[n - 1];
    int vt, vt1;
    for(int i = 0;i < n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            vt = max;
        }
        else if(a[i] < min)
        {
            min = a[i];
            vt1 = min;
        }
    }
    for(int i = 0;i < n;i++)
    {
        if(a[i] == max)
        {
            a[i] = vt1;
        }
        else if(a[i] == min)
        {
            a[i] = vt;
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
