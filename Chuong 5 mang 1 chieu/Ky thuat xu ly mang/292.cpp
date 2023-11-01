#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

void input(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void output(double a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cout << setprecision(0) << fixed <<a[i] << " ";
    }
}

//void solve(double a[], int n)
//{
//    for(int i = 0;i < n;i++)
//    {
//        for(int j = i + 1;j < n;j++)
//        {
//            if(a[j] == (int)a[j])
//            {
//                a[i] = a[j];
//            }
//        }
//    }
//}

int main()
{
    double a[100];
    int n;
    cin >> n;
    input(a, n);
    output(a, n);
    return 0;
}
