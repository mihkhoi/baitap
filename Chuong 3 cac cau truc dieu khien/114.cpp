#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double x, s1, s2 = 0, s3 = 0, s4 = 0;
    cin >> x >> n;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";  
        }
        s3 += i;
        s1 = pow(x, i);
        s2 += i;
        s4 += s1/s2;
    }
    cout << endl << s3 << endl;
    cout << s4 << endl;
    int n1, t, d = 0;
    cin >> n1;
    while(n1 > 0)
    {
        t = n1%10;
        d++;
        n1 /= 10;
    }
    cout << d;
    return 0;
}
