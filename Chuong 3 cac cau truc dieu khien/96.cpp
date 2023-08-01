#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x, ketqua;
    cin >> x;
    if(x >= 5)
    {
        ketqua = 2*x*x + 5*x + 9;
    }
    else
    {
        ketqua = -2*x*x + 4*x - 9;
    }
    cout << ketqua;
    return 0;
}
