#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

bool check(int a[], int n, int b[], int m)
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[i] == b[i])
            {
                d++;
                break;
            }
        }
    }
    if(d == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int a[100], b[100], n, m;
    cin >> n;
    input(a, n);
    cin >> m;
    input(b, m);
    cout << check(a, n, b, m);
    return 0;
}
