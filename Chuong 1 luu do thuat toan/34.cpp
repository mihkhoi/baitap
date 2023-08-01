#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0, n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s = sqrt(i + s);//no se them nguoc vd n = 2 sqrt(1 + 0) = 1, sqrt(2 + 1) = 1,73205
    }//bai toan se add nguoc;
    cout << s;
    return 0;
}
