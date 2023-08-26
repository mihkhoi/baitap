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
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n + 1;j++)
        {
            if(a[i] < a[j] && a[i] != a[j])
            {
                cout << "Cap (" << a[i] << ", " << a[j] << ")" << endl;
            }
        }
    }
}

int main()
{
    double a[100], b[100];
    int n;
    do
    {
        cin >> n;
    }while(n <= 2);
    nhap(a, n);
    solve(a, n);
    return 0;
}
