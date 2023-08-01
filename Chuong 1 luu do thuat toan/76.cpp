#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n, k, d = 0;
    cin >> n;
    k = n;
    for(long i = 1;i <= k;i++)
    {
        if(pow(3, i) == n)
        {
            d++;
        }
    }
    cout << "so nguyen duong 4 byte " << n << " co dang 3^k hay khong?" << endl;
    if(d > 0)
    {
        cout << "co";
    }
    else
    {
        cout << "khong";
    }
    return 0;
}
