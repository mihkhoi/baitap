#include<bits/stdc++.h>
using namespace std;

void input(int a[][100], int n , int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
}

bool check(int a[][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[i][j]%2 == 0 && a[i][j] < 2004)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int a[100][100], n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    cout << check(a, n, m);
    return 0;
}
