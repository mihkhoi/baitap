#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        s = sqrt((n - i) + s);//y chang bai tren bai nay cx them nguoc n = 2 sqrt((2 - 0) + 0) = can 2, sqrt(2 - 1) + can = 1,55377
    }
    cout << s;
    return 0;
}
