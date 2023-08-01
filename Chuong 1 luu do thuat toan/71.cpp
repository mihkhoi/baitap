#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n , x, s = 0, s1 = 1, s2 = 0;
    cin >> x >> n;
    for(int i = 1;i <= n;i++)
    {
        s1 = pow(x, i);
        s2 += i;
        s += pow(-1, i) * (s1/s2);
    }
    cout << s;
    return 0;
}
