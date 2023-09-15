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
        if((a[i] - a[i - 1]) != 1)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    cout << check(a, n);
    return 0;
}
