#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                cout << "Phuong trinh vo so nghiem";
            }
            else
            {
                cout << "Phuong trinh vo nghiem";
            }
        }
        else
            cout << "Phuong trinh co 1 nghiem x = " << -c/b;
    }
    else
    {
        double delta, x1, x2;
        delta = (b*b) - (4*a*c);
        if(delta < 0)
        {
            cout << "Phuong trinh vo nghiem";
        }
        else if(delta == 0)
        {
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b/(2*a);
        }
        else
        {
            x1 = ((-b) + sqrt(delta))/(2*a);
            x2 = ((-b) - sqrt(delta))/(2*a);
            cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2;
        }
    }
    return 0;
}
