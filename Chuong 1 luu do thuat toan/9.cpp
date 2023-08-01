#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 1;
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s *= i;
    }
    cout << s;
    return 0;
}
