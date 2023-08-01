#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n, s = 0, s1 = 0;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s1 += i;
        s += pow(-1, i + 1) * (1/s1);
    }
    cout << s;
    return 0;
}
