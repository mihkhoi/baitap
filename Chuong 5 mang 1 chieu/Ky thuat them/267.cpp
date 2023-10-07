#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    int temp;
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

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    output(a, n);
    return 0;
}
