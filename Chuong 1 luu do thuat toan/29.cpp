#include<bits/stdc++.h>
using namespace std;

int main()
{
    int max = 0, n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0 && i%2 != 0)
        {
            if(i > max)
            {
                max = i;
            }
        }
    }
    cout << max;
    return 0;
}