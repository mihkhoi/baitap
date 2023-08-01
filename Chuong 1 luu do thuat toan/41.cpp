#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 1, n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s = 1/(1+(s)) ;
    }
    cout << s;
    return 0;
}
