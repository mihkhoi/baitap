#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void ouput(int a[], int n)
{
    for(int i = n - 1;i >= 0;i--)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    ouput(a, n);
    return 0;
}
