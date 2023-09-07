#include<bits/stdc++.h>
using namespace std;

void input(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

double solve(double a[], int n)
{
    double s = 0, d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            s += abs(a[i] - a[j]);
            if(s == 0)
            {
                continue;
            }
            d++;
        }
    }
    return s/d;
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    input(a, n);
    cout << solve(a, n);
    return 0;
}
