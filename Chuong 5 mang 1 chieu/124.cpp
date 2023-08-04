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
    bool check = false;
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
        {
            if(a[i] < 2004)
            {
                check = true;
            }
        }
    }
    return check;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
