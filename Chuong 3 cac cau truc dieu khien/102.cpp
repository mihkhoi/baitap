#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ngay, thang ,nam;
    cin >> ngay >> thang >> nam;
    if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10)
    {
        if(ngay >= 1 && ngay < 31)
        {
            cout << ngay + 1 << " " << thang << " " << nam;
        }
        if(ngay == 31)
        {
            cout << ngay - ngay + 1 << thang + 1 << nam;
        }
    }
    else if(thang == 12)
    {
        if(ngay >= 1 && ngay < 31)
        {
            cout << ngay + 1 << " " << thang << " " << nam;
        }
        if(ngay == 31)
        {
            cout << ngay - ngay + 1 << " " << thang - thang + 1 << " " << nam + 1;
        }
    }
    else if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        if(ngay >= 1 && ngay < 30)
        {
            cout << ngay + 1 << " " << thang << " " << nam;
        }
        if(ngay == 30)
        {
            cout << ngay - ngay + 1 << " " << thang + 1 << " " << nam;
        }
    }
    else if(thang == 2)
    {
        if(nam%4 == 0 || nam%400 == 0)
        {
            if(ngay >= 1 && ngay < 29)
            {
                cout << ngay + 1 << " " << thang << " " << nam;
            }
            if(ngay == 29)
            {
                cout << ngay - ngay + 1 << " " << thang + 1 << " " << nam;
            }
        }
        else
        {
            if(ngay >= 1 && ngay < 28)
            {
                cout << ngay + 1 << " " << thang << " " << nam;
            }
            if(ngay == 28)
            {
                cout << ngay - ngay + 1 << " " << thang + 1 << " " << nam;
            }
        }
    }
    return 0;
}
