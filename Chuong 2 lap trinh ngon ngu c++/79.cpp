#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, m;
    cin >> n;
    m = n;
    int d = 0;
    while(n > 0)
    {
        t = n%10;
        d++;
        n /= 10;
    }
    cout << "so luong chu so cua so nguyen duong " << m << ": " << d;
    return 0;
}
