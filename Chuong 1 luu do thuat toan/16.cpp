#include<bits/stdc++.h>
using namespace std;

//int main()
//{
//    double s1= 0, s2 = 0;
//    int n, x;
//    cin >> x >> n;
//    for(int i = 1;i <= n;i++)
//    {
//        s1 += i;
//        s2 += (double)pow(x, i)/(double)s1;
//    }
//    cout << s2;
//    return 0;
//}
int main()
{
    double s1 = 1, s2 = 0, s3 = 0;
    int n, x;
    cin >> x >> n;
    for(int i = 1;i <= n;i++)
    {
        s1 *= x;
        s2 += i;
        s3 += s1/s2;
    }
    cout << s3;
    return 0;
}
