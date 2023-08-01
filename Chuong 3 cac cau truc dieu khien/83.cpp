#include<bits/stdc++.h>
using namespace std;

bool check(double a, double b)
{
    if(a > 0 && b < 0)
    {
        return false;
    }
    else if(a < 0 && b > 0)
    {
        return false;
    }
    return true;
}

int main()
{
    double a, b;
    cin >> a >> b;
    if(check(a, b) == true)
    {
        cout << "Cung dau";
    }
    else
    {
        cout << "Khac dau";
    }
    return 0;
}
