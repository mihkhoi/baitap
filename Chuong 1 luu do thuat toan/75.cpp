#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n, d = 0, k;
    cin >> n;
    k = n;
    for(long i = 1;i <= k;i++)
    {
        if(pow(2, i) == n)
        {
            d++;
        }
    }
    cout << "So nguyen 4 byte " << n << " co dang 2^k hay khong?" << endl;
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
