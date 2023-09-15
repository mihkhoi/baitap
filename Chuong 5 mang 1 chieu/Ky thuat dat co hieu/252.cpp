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
    for(int i = 1;i < n - 1;i += 2)
    {
        if((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i - 1]))
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
