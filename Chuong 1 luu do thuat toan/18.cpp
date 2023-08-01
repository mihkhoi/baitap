#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, n1 = 1, n2 = 1;
    int n, x;
    cin >> x >> n;
    for(int i = 2;i <= 2*n;i += 2)
    {
        n1 = pow(x, i);
        n2 *= i * (i - 1);//vi cai nay la 2*n nen phai them (i - 1) vao de nhan them voi dang trc con thieu
        s = n1/n2;
    }
    cout << s + 1;
    return 0;
}
