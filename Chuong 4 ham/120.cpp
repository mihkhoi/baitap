#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    if(pow(sqrt(n), 2) == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(check(i))
        {
            if(i < n)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
