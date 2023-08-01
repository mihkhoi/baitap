//so chinh phuong la so can bac hai la mot so tu nhien
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //int cp = sqrt(n);
    //if((cp * cp) == n)
    if(pow(sqrt(n), 2) == n)
    {
        cout << n << " la so chinh phuong";
    }
    else
    {
        cout << n << " khong phai la so chinh phuong";
    }
    return 0;
}
