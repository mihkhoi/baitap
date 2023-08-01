#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, n1 = 1, n2 = 1, n, x;
    cin >> x >> n;
    for(int i = 3;i <= 2*n+1;i += 2)
    {
        n1 = pow(x, i);
        n2 *= i * (i - 1);
        s += n1/n2;
    }
    cout << s + 1 + x;
    return 0;
}
