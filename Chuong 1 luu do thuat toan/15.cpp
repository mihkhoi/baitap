#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s1= 0, s2 = 0;
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s1 += i;
        s2 += 1/(double)s1;
    }
    cout << s2;
    return 0;
}
