#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 0, n, x;
    cin >> x >> n;
    for(int i = 1;i <= n;i++)
    {
        s += pow(x, i);
    }
    cout << s;
    return 0;
}
