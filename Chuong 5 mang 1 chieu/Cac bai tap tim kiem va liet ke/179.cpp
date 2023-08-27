#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    int flag = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] > abs(a[i + 1]))
        {
            flag = 1;
            cout << a[i] << " ";
        }
        if(a[i] == abs(a[i + 1]))
        {
            break;
        }
    }
    if(flag == 0)
    {
        cout << "Mang khong co gia tri";
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    nhap(a, n);
    solve(a, n);
    return 0;
}
