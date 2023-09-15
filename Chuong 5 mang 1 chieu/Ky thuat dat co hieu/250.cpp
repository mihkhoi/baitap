#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int check(int a[], int n)
{
    int flag = 1;
    int d = a[1] - a[0];
    for(int i = 2;i < n - 1;i++)
    {
        if((a[i + 1] - a[i]) != d)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    cout << check(a, n);
    return 0;
}
