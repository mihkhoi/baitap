#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 0;
    int n, x;
    cin >> x >> n;
    for(int i = 2;i <= 2*n;i = i + 2)
    {
        //t = t * x;
        //s += t;
        s += pow(x, i);
    }
    cout << s;
    system("pause");
    return 0;
}
