#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(double a[], int n)
{
    double min = abs(a[0] - a[1]);
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n -1;j++)
        {
            if(abs(a[i] - a[j]) < min)
            {
                min = abs(a[i] - a[j]);
            }
        }
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n - 1;j++)
        {
            if(abs(a[i] - a[j]) == min)
            {
                cout << a[i] << " " << a[j];
            }
        }
    }
}

int main()
{
    double a[100];
    int n;
    do
    {
        cin >> n;
    }while(n <= 2);
    nhap(a, n);
    solve(a, n);
    return 0;
}
