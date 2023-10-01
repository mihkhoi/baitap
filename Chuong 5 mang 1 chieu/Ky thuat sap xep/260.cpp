#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

int tranmit(int a[], int n)
{
    int temp = 0;
    for(int i = 0;i < n;i++)
    {
        temp = temp*10 + a[i];
    }
    return temp;
}

bool check(int a[], int b[], int n, int m)
{
    int temp = tranmit(a, n), temp1 , temp2 = 0;
    while(temp != 0)
    {
        temp1 = temp%10;
        temp2 = temp2*10 + temp1;
        temp /= 10;
    }
    if(temp2 == tranmit(b, m))
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
    cout << check(a, b, n, m);
    return 0;
}
