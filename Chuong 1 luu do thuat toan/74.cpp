#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n, x, s = 0, s1 = 0, s2 = 1, z = 1;
    cin >> x >> n;
    for(double i = 3;i <= 2*n+1;i += 2)
    {
        s1 = pow(x, i);
        s2 *= i * (i - 1);
        s += pow(-1, ((i-1)/2) + 1) * (s1/s2);
    }
    cout << z - x + s;
    return 0;
}
