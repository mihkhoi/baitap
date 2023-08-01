#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    for(int i = 1;s + 1 < n;i++)
    {
        s += i;
    }
    cout << s;
    return 0;
}
