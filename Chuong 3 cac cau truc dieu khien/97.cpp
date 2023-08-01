#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(a < b+c && b < a+c && c < a + b)
    {
        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            cout << "Tam giac vuong";
        }
        else if(a == b && b == c && c == a)
        {
            cout << "Tam giac deu";
        }
        else if(a == b || a == c || b == c)
        {
            cout << "Tam giac can";
        }
        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
        {
            cout << "Tam giac tu";
        }
        else
        {
            cout << "Tam giac nhon";
        }
    }
    else
    {
        cout << "ba canh a, b ,c khong phai la tam giac";
    }
    return 0;
}
