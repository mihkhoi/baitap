#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(int a[], int n)
{
    for(int i = 1;i < n;i++)
    {
        if((a[i] + a[i - 1])%2 != 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    cout << check(a, n);
    return 0;
}
