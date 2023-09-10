#include<bits/stdc++.h>
using namespace std;

void input(int b[], int m)
{
    for(int i = 0;i < m;i++)
    {
        cin >> b[i];
    }
}

int solve(int b[], int d[], int m)
{
    int dem = 0, count = 0;
    for(int i = 0;i <= 100;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(i == b[j])
            {
                dem++;
            }
        }
        d[i] = dem;
        dem = 0;
    }
    for(int i = 0;i <= 100;i++)
    {
        if(d[i] == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int b[100], d[100], m;
    int a[100], c[100], n;
    cin >> m;
    input(b, m);
    cin >> n;
    input(a, n);
    int x, y;
    x = solve(b, d, m);
    y = solve(a, c, n);
    cout << x + y;
    return 0;
}
