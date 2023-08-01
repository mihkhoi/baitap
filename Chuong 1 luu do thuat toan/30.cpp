//so hoan thien la mot so nguyen duong ma tong cac uoc nguyen duong thuc su cua no bang chinh no
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 0, n;
    cin >> n;
    for(int i = 1;i < n;i++)
    {
       if(n%i == 0) 
       {
           s += i;
       }
    }
    if(s == n)
    {
        cout << n << " la so hoan thien";
    }
    else
    {
        cout << n << " khong phai so hoan thien";
    }
    return 0;
}
