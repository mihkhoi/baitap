#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int solve(int a[], int n)
{
    int min = a[n - 1];
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
        {
            if(a[i] < min)
            {
                min = a[i];
            }
        }
    }
    return min;
}

int main()
{
    int a[100], n;
    cin >> n;
    return 0;
}
