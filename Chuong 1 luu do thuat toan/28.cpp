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
            //if(i < n)
            //{
                s += i;
            //}
        }
    }
    cout << s;
    return 0;
}
