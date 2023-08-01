#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, n;
    cin >> n;
    for(double i = 1;i <= n;i++)
    {
        s = pow(i + s, 1/(i+1));
    }
    cout << s;
    return 0;
}
