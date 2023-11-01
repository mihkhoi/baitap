#include<bits/stdc++.h>
using namespace std;

void input(double a[][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
}

double solve(double a[][100], int n, int m, int vt)
{
    int s = 1;
    for(int i = 0;i < n;i++)
    {
        for(int j = vt;j < m;j++)
        {
            if(a[i][j] > 0)
            {
                s *= a[i][j];
                break;
            }
        }
    }
    return s;
}

int main()
{
    double a[100][100];
    int n, m, vt;
    cin >> n;
    cin >> m;
    input(a, n, m);
    cout << "Nhap vt cot can xoa: ";
    cin >> vt;
    cout << solve(a, n, m, vt);
    return 0;
}
