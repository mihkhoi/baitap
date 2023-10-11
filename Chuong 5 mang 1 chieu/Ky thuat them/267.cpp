#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        for(int j = 0;j < i;j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                for(int k = i;k > j;k--)
                {
                    a[k] = a[k - 1];
                }
                a[j] = temp;
                break;
            }
        }
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
