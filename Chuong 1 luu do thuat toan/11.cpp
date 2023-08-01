#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s1 = 1, s2 = 0;
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s1 *= i;//nhan tung phan i
        s2 += s1;//roi cong tung phan s1
    }
    cout << s2;
    return 0;
}
