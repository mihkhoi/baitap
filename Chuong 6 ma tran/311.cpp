#include<bits/stdc++.h>
using namespace std;

void input(int a[100][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;i < m;j++)
        {
            cin >> a[i][j];
        }
    }
}

int main()
{
    int a[100][100];
    int n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    return 0;
}
