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

void sort(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void add(int a[], int n, int k , int x)
{
    for(int i = n + 1;i > k;i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    sort(a, n);
    int x, k;
    cin >> k >> x;
    add(a, n, k, x);
    n++;
    sort(a, n);
    output(a, n);
    return 0;
}
