#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, n, x;
    cin >> x >> n;
    for(double i = 1;i <= n;i++)
    {
        s = sqrt(pow(x, i) + s);
    }
    cout << s;
    return 0;
}
