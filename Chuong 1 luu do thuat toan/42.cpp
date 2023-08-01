#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 0, n;
    cin >> n;
    for(int i = 1;s + i < n;i++)//thuat toan tinh gia tri be hon n roi cout ra
    {
        s += i;
    }
    cout << s;
    return 0;
}
//vd n = 7;
//1. s + i = 0 + 1 < 7
//s += i, 0 + 1 = 1
//2. s + i = 1 + 2 = 3 < 7
//s += i, 1 + 2 = 3;
//3. s + i = 3 + 3 = 6 < 7
//s += i, 3 + 3 = 6
//4.s + i = 6 + 4 = 10 < 7
//stop loop
