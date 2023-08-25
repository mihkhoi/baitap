#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int tsln(int a[], int n)
{
    int max = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] > max)
        {
            max  = a[i];
        }
    }
    return max;
}

int tbcnn(int a[], int n)
{
    int bs = tsln(a, n);
    for(int i = 0;i < n;i++)
    {
        if(bs%a[i] != 0)
        {
            bs += tsln(a, n);
            i = -1;
        }
    }
    return bs;
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    cout << tbcnn(a, n);
    return 0;
}
