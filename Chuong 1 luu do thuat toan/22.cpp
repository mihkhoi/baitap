#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s = 1, n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
            s *= i;
        }
    }
    cout << endl;
    cout << s;
    return 0;
}
