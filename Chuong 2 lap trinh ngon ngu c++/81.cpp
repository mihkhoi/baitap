#include<bits/stdc++.h>
using namespace std;

int tong(int n)
{
    int s = 0;
    for(int i = 1;i <= n;i++)
    {
        s += i;
    }
    return s;
}

void lietke(int n)
{
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
        }
    }
}

int dem(int n)
{
    int d = 0, t;
    while(n > 0)
    {
        t = n%10;
        d++;
        n /= 10;
    }
    return d;
}

double tinh(int n, double x)
{
    double s = 0, s1 = 1, s2 = 0;
    for(int i = 1;i <= n;i++)
    {
        s1 = pow(x, i);
        s2 += i;
        s += s1/s2;
    }
    return s;
}

int main()
{
    int n, n1, n2, n3;
    double x;
    cin >> n;
    cout << "Tong cua day so: " << tong(n) << endl;
    cin >> n1;
    cout << "Cac uoc cua so nguyen duong " << n1 << ": ";
    lietke(n1);
    cout << endl;
    cin >> n2;
    cout << "So luong chu so nguyen duong " << n2 << ": " << dem(n2) << endl;
    cin >> x >> n3;
    cout << tinh(n3, x);
    return 0;
}
