#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    while(n > 0)
    {
        t = n%10;
        n /= 10;
    }
    cout << t;
    return 0;
}
