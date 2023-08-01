#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, t = 1, n;
    cin >> n;
    for(double i = 1;i <= n;i++)
    {
        t *= i;
        s = pow(t + s, 1/(i+1));
    }
    cout << s;
    return 0;
}
