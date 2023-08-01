#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ngay, thang , nam, s, i;
    cin >> ngay >> thang >> nam;
    s = ngay;
    for(int i = 1;i < thang;i++)
    {
        switch (i) {
            case 4: case 6: case 9: case 11: s += 30; break;
            case 2: s += (nam%4 == 0 && nam%100 == 0 || nam%400 == 0) ? 29 : 28;
                    break;
            default: s += 31;
        }
    }
    cout << "Ngay thu " << s << " trong nam";
    return 0;
}
