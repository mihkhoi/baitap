//doi xung dung thuat toan dao nguoc lai het cac chu so
//roi so sanh xem co bang nhau khong
//neu bang nhau thi la doi xung
//k bang nhau thi la khong doi xung
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t, y = 0, d = 0;
    cin >> n;
    m = n;
    while(n > 0)
    {
        t = n%10;
        y = y * 10 + t;
        d++;
        n /= 10;
    }
    if(m == y)
    {
        cout << "so nguyen duong " << m << " la so doi xung";
    }
    else
    {
        cout << "so nguyen duong " << m << " khong phai la so doi xung";
    }
    return 0;
}
