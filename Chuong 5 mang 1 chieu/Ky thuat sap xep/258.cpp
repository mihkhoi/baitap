#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
}

bool check(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(check(a[i]) == true && check(a[j]) == true)
            {
                if(a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    solve(a, n);
    output(a, n);
    return 0;
}
