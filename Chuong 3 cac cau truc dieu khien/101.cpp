#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;
    if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
    {
        cout << "Thang " << t << " co 31 ngay";
    }
    else if(t == 4 || t == 6 || t == 9 || t == 11)
    {
        cout << "Thang " << t << " co 30 ngay";
    }
    else if(t == 2)
    {
        if(n%4 == 0 && n%400 == 0)
        {
            cout << "Thang " << t << " co 29 ngay";
        }
        else
        {
            cout << "Thang " << t << " co 28 ngay";
        }
    }
    return 0;
}
