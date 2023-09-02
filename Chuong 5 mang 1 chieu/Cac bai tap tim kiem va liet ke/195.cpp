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
        for(int j  = i + 1;j < n;j++)
        {
            for(int k = j + 1;k < n;k++)
            {
                if(a[i] != a[k] && a[i] != a[j] && a[j] != a[k])
                {
                    if(a[i] == a[j] + a[k] /*|| a[j] == a[i] + a[k] || a[k] == a[i] + a[j]*/)
                    {
                        cout << "(" << a[i] << ", " << a[j] << ", " << a[k] << ")" << endl;
                    }
                    if(a[j] == a[i] + a[k])
                    {
                        cout << "(" << a[j] << ", " << a[i] << ", " << a[k] << ")" << endl;
                    }
                    if(a[k] == a[i] + a[j])
                    {
                        cout << "(" << a[k] << ", " << a[i] << ", " << a[j] << ")" << endl;
                    }
                }
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
    }while(n < 4);
    nhap(a, n);
    solve(a, n);
    return 0;
}
