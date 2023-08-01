#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int s = 0, n, x;
    cin >> x >> n;
    for(int i = 1;i < (2*n+1);i += 2)
    {
        s += pow(x, i);
    }
    cout << s;
    return 0;
}
