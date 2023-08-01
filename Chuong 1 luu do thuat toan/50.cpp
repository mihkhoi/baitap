#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, s = 0;
    cin >> n;
    int res = 0;
    while(n > 0)
    {
        t = n%10;
        s = s * 10 + t;//thuat toan thay vi chia 10 thi nhan 10 de them vao s de thanh 1 chuoi dao nguoc
        n /= 10;
    }
    cout << s;
    return 0;
}
//Ví dụ với n = 123450
//Check n = 123450 > 0 ? True
//tmp = n % 10 = 123450 % 10 = 0
//res = res * 10 + tmp = 0 * 10 + 0 = 0
//n = n / 10 = 123450 / 10 = 12345
//
//Check n = 12345 > 0 ? True
//tmp = n % 10 = 12345 % 10 = 5
//res = res * 10 + tmp = 0 * 10 + 5 = 5
//n = n / 10 = 12345 / 10 = 1234
//
//Check n = 1234 > 0 ? True
//tmp = n % 10 = 1234 % 10 = 4
//res = res * 10 + tmp = 5 * 10 + 4 = 54
//n = n / 10 = 1234 / 10 = 123
//
//Check n = 123 > 0 ? True
//tmp = n % 10 = 123 % 10 = 3
//res = res * 10 + tmp = 54 * 10 + 3 = 543
//n = n / 10 = 123 / 10 = 12
//
//Check n = 12 > 0 ? True
//tmp = n % 10 = 12 % 10 = 2
//res = res * 10 + tmp = 543 * 10 + 2 = 5432
//n = n / 10 = 12 / 10 = 1
//
//Check n = 1 > 0 ? True
//tmp = n % 10 = 1 % 10 = 1
//res = res * 10 + tmp = 5432 * 10 + 1 = 54321
//n = n / 10 = 1 / 10 = 0
//
//Check n = 1 > 0 ? False
