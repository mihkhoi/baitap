#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0;
    int n;
    cin >> n;
    for(int i = 2;i <= 2*n;i = i + 2)
    {
        s += 1/(double)i;
    }
    cout << s;
    return 0;
}
