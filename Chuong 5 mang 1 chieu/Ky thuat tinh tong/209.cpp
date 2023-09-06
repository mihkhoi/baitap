#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool kiemtra(int n)
{
    int t, t1 = 0, n1;
    n1 = n;
    while(n != 0)
    {
        t = n%10;
        t1 = t1*10 + t;
        n /= 10;
    }
    return n1 == t1? true : false;
}

int solve(int a[], int n)
{
    int s = 0;
    for(int i = 0;i < n;i++)
    {
        if(kiemtra(a[i]) == true)
        {
            s += a[i];
        }
    }
    return s;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << solve(a, n);
    return 0;
}
