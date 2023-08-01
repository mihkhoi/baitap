#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ngay, thang ,nam;
    cin >> ngay >> thang >> nam;
    if(thang == 5 || thang == 7 || thang == 10 || thang == 12)
    {
        if(ngay > 1 && ngay <= 31)
        {
            cout << ngay - 1 << " " << thang << " " << nam;
        }
        if(ngay == 1)
        {
            cout << ngay - ngay + 30 << thang - 1 << nam;
        }
    }
    else if(thang == 8)
    {
        if(ngay > 1 && ngay <= 31)
        {
            cout << ngay - 1 << " " << thang << " " << nam;
        }
        if(ngay == 1)
        {
            cout << ngay - ngay + 31 << " " << thang - 1 << " " << nam;
        }
    }
    else if(thang == 1)
    {
        if(ngay > 1 && ngay <= 31)
        {
            cout << ngay - 1 << " " << thang << " " << nam;
        }
        if(ngay == 1)
        {
            cout << ngay - ngay + 31 << " " << thang - thang + 12 << " " << nam - 1;
        }
    }
    else if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        if(ngay > 1 && ngay <= 30)
        {
            cout << ngay - 1 << " " << thang << " " << nam;
        }
        if(ngay == 30)
        {
            cout << ngay - ngay + 31 << " " << thang - 1 << " " << nam;
        }
    }
    else if(thang == 2)
    {
        if(ngay > 1 && ngay < 29)
        {
            cout << ngay - 1 << " " << thang << " " << nam;
        }
        if(ngay == 1)
        {
            cout << ngay - ngay + 31 << " " << thang - 1 << " " << nam;
        }
    }
    else if(thang == 3)
    {
        if(nam%4 == 0 || nam%400 == 0)
        {
            if(ngay > 1 && ngay <= 31)
            {
                cout << ngay - 1 << " " << thang << " " << nam;
            }
            if(ngay == 1)
            {
                cout << ngay - ngay + 29 << " " << thang - 1 << " " << nam;
            }
        }
        else
        {
            if(ngay > 1 && ngay <= 31)
            {
                cout << ngay - 1 << " " << thang << " " << nam;
            }
            if(ngay == 1)
            {
                cout << ngay - ngay + 28 << " " << thang - 1 << " " << nam;
            }
        }
    }
    return 0;
}
