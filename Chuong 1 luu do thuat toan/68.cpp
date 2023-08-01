#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, s = 0;
    cin >> x >> n;
    for(int i = 1;i <= n;i++)
    {
        s += pow(-1, i) * pow(x, 2*i);
    }
    cout << s;
    return 0;
}
