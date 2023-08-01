#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        s += (double)(2*i+1)/(double)(2*i+2);
    }
    cout << s;
    return 0;
}
