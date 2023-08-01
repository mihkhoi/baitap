#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 0, n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s += pow(i, 2);
    }
    cout << s;
    return 0;
}
