#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, n;
    cin >> n;
    for(double i = 2;i <= n;i++)
    {
        s = pow(i + s, 1/i);
    }
    cout << s;
    return 0;
}
