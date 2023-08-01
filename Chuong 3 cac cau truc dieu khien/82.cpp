#include<bits/stdc++.h>
using namespace std;

double FindMax(double a, double b, double c)
{
    double m;
    if(a > b && a > c)
    {
        m = a;
    }
    else if(b > a && b > c)
    {
        m = b;
    }
    else
    {
        m = c;
    }
    return m;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << "So lon nhat: " << FindMax(a, b ,c);
    return 0;
}
