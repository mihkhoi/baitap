//so nguyen to la so tu nhien lon hon 1 va co dung hai uoc so va chinh no
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d = 0;
    cin >> n;
    if(n > 1)
    {
        for(int i = 1;i <= n;i++)
        {
            if(n%i == 0)//kiem tra so n co bao nhieu so nguyen to
            {
                d++;//roi dem so do co bao nhieu so nguyen to
            }
        }
    }
    if(d <= 2)//kiem tra xem so do co bao nhieu uoc so chung  be hon bang 2 la so nguyen to
    {
        cout << n << " la so nguyen to";
    }
    else
    {
        cout << n << " khong phai la so nguyen to";
    }
    return 0;
}
