#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, t = 1, n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        t *= i;
        s = sqrt(t + s);
    }
    cout << s;
    return 0;
}
