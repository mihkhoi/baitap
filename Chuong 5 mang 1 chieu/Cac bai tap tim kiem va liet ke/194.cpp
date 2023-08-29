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
    int min = 1000, s = 0, vt, vt1;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            s = a[i] - a[j];
            if(s != 0)
            {
                if(s < min)
                {
                    min = s;
                    vt = i;
                    vt1 = j;
                }
            }
        }
        cout << a[vt] << ", " << a[vt1] << endl;
        min = 1000;
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
