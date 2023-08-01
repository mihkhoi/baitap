#include<bits/stdc++.h>
using namespace std;

int solve(double a, double b, double c, double x1, double x2)
{
    double delta = (b*b)-(4*a*c);
    if(delta < 0)
    {
        x1 = x2 = 0.0;
        return 0;
    }
    else if (delta == 0)
    {
        x1 = x2 = (-b)/(2*a);
        return 1;
    }
    else
    {
        delta = sqrt(delta);
        x1 = (-b + delta)/(2*a);
        x2 = (-b - delta)/(2*a);
        return 2;
    }
    return 3;
}

int main()
{
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    if(solve(a, b, c, x1, x2) == 0)
    {
        cout << "Phuong trinh vo nghiem";
    }
    else if(solve(a, b, c, x1, x2) == 1)
    {
        if(x1 < 0)
        {
            cout << "Phuong trinh vo nghiem";
        }
        else if(x1 == 0)
        {
            cout << "Phuong trinh co 1 nghiem x = " << 0;
        }
        else
        {
            cout << "Phuong trinh co hai nghiem:" << endl;
            cout << "x1 = " << sqrt(x1) << endl;
            cout << "x2 = " << -sqrt(x1) << endl;
        }
    }
    else if(solve(a, b, c, x1, x2) == 2)
    {
        if(x1 < 0)
        {
            if(x2 < 0)
            {
                cout << "Phuong trinh vo nghiem";
            }
            else if(x2 == 0)
            {
                cout << "Phuong trinh co 1 nghiem x = " << 0;
            }
            else
            {
                cout << "Phuong trinh co 2 nghiem:" << endl;
                cout << "x1 = " << sqrt(x2) << endl;
                cout << "x2 = " << -sqrt(x2) << endl;
            }
        }
        else if(x1 == 0)
        {
            if(x2 < 0)
            {
                cout << "Phuong trinh co 1 nghiem x = " << 0;
            }
            else
            {
                cout << "Phuong trinh co 3 nghiem:" << endl;
                cout << "x1 = " << sqrt(x2) << endl;
                cout << "x2 = " << -sqrt(x2) << endl;
                cout << "x3 = " << 0;
            }
        }
        else
        {
            if(x2 < 0)
            {
                cout << "Phuong trinh co 2 nghiem:" << endl;
                cout << "x1 = " << sqrt(x1) << endl;
                cout << "x2 = " << -sqrt(x1) << endl;
            }
            else if(x2 == 0)
            {
                cout << "Phuong trinh co 3 nghiem:" << endl;
                cout << "x1 = " << sqrt(x1) << endl;
                cout << "x2 = " << -sqrt(x2) << endl;
                cout << "x3 = " << 0;
            }
            else
            {
                cout << "Phuong trinh co 4 nghiem:" << endl;
                cout << "x1 = " << sqrt(x1) << endl;
                cout << "x2 = " << -sqrt(x1) << endl;
                cout << "x3 = " << sqrt(x2) << endl;
                cout << "x4 = " << -sqrt(x2) << endl; 
            }
        }
    }
    else
    {
        goto q1;
    }
    q1:return 0;
}
