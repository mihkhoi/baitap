#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, s = 0;
    cin >> n >> x;
    for(int i = 1;i <= n;i++)
    {
        s += pow(-1, i+1) * pow(x, i);
    }
    cout << s;
    return 0;
}
