#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
        {
            cout << a[i] << endl;
        }
    }

    cout << endl;

    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 != 0)
        {
            cout << a[i] << endl;
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    solve(a, n);
    return 0;
}
