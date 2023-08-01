#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0;
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s += 1/(double)i;
    }
    cout << s;
    return 0;
}
