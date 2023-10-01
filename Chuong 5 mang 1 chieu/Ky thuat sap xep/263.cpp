#include<bits/stdc++.h>
using namespace std;

void input(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
}

void solve(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(a[i] > 0 && a[j] > 0)
            {
                if(a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
            else
            {
                if(a[i] < a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    input(a, n);
    solve(a, n);
    output(a, n);
    return 0;
}
