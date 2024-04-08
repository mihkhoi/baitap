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

void output(double a[][100], int n, int m)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

double transmit(double a[][100], double b[100], int n, int m)// doi ma tran sang mang 1 chieu
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            b[d++] = a[i][j];
        }
    }
    return d;
}

void sort(double b[], int d)// sap xep tang dan
{
    for(int i = 0;i < d;i++)
    {
        for(int j = i + 1;j < d;j++)
        {
            if(b[i] > b[j])
            {
                swap(b[i], b[j]);
            }
        }
    }
}

void transmitt(double a[][100], double b[], int n, int m)// mang 1 chieu doi sang mang 2 chieu
{
    int d = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            a[i][j] = b[d++];
        }
    }
}

int main()
{
    double a[100][100], b[100];
    int n, m;
    cin >> n;
    cin >> m;
    input(a, n, m);
    int d;
    d = transmit(a, b, n, m);
    sort(b, d);
    transmitt(a, b, n, m);
    output(a, n, m);
    return 0;
}
