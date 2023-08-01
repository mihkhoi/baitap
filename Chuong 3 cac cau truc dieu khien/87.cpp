#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  s = 0;
    for(int i = 1;i <= 1000;i++)
    {
        s += i;
        if(s > 1000)
        {
            break;
        }
    }
    cout << s;
    return 0;
}
