#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void xuat(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
}


void sort(double a[], int n)
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

double min(double a[], int n)
{
    int s = 0, min = a[n - 1];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            s = a[i] - a[j];
            if(s < 0)
            {
                s *= -1;
            }
            if(s == 0)
            {
                continue;
            }
            if(s < min)
            {
                min = s;
            }
        }
    }
    return min;
}


void solve(double a[], int n)
{
    int s = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            s = a[i] - a[j];
            if(s < 0)
            {
                s *= -1;
            }
            if(s == 0)
            {
                continue;
            }
            if(s == min(a, n))
            {
                cout << a[i] << ", " << a[j] << endl;
            }
        }
    }
}


int main()
{
    double a[100], n;
    cin >> n;
    nhap(a, n);
    solve(a, n);
    return 0;
}
