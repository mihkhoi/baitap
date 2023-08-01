#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    x = (f - ((e*c)/b)) / (d-((e*a)/ b));// cong thuc giai he phuong trinh bat nhat
    y = (c - a*x)/ b;// hai an
    cout << x <<  " " << y;
    return 0;
}
