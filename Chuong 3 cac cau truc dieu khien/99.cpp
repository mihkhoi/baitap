#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(a < b && a < c)
    {
        cout << a << " ";
        if(b < c)
        {
            cout << b << " " << c;
        }
        else
        {
            cout << c << " " << b;
        }
    }
    else if(b < a && b < c)
    {
        cout << b << " ";
        if(a < c)
        {
            cout << a << " " << c;
        }
        else
        {
            cout << c << " " << a;
        }
    }
    else
    {
        cout << c << " ";
        if(a < b)
        {
            cout << a << " " << b;
        }
        else
        {
            cout << b << " " << a;
        }
    }
    cout << endl;
    int temp;
    if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    cout << a << " " << b << " " << c;
    return 0;
}
