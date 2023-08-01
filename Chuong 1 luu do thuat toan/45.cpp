#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 1, n, t;
    cin >> n;
//    while(n > 0)
//    {
//        t = n%10;
//        s *= t;
//        n /=10;
//    }
    for(;n > 0;n /= 10)
    {
        t = n%10;
        s *= t;
    }
    cout << s;
    return 0;
}
