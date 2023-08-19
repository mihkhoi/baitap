#include<bits/stdc++.h>
using namespace std;

void nhap(double a[], int n)
{
    for(int i = 0;i < n;i++) 
    {
        cin >> a[i];
    }
}

double max(double a[], int n)
{
    int max = a[0];
    for(int i = 0;i < n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

double min(double a[], int n)
{
    int min = a[n - 1];
    for(int i = 0;i < n;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    double a[100];
    int n;
    cin >> n;
    nhap(a, n);
    cout << "Doan [a," << "b]" << " = " << "[" << min(a, n) << ", " << max(a, n) << "]";
    return 0;
}
