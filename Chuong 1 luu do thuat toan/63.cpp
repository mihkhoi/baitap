#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, lcm;
    cin >> a >> b;
    int maX = a*b;
    for(int i = max(a, b);i <= maX;i++)
    {
        if(i%a == 0 && i%b == 0)
        {
            lcm = i;
            break;
        }
    }
    cout << "BCNN(" << a << ", " << b << ")" << " = " << lcm << endl;
    return 0;
}
