#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, s = 0;
    cin >> x >> n;
    for(int i = 0;i < n;i++)
    {
        s += pow(-1, i + 2) * pow(x, 2*i+1);
    }
    cout << s;
    return 0;
}
