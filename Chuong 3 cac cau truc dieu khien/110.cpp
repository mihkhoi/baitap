#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 0;i <= 200;i++)
    {
        for(int j = 0;j <= 100;j++)
        {
            for(int k = 0;k <= 50;k++)
            {
                if(i*1000 + j*2000 + k*5000 == 200000)
                {
                    cout << i << " to 1000(VND) - " << j << " to 2000(VND) - " << k << " to 5000(VND)" << endl;
                }
            }
        }
    }
    return 0;
}
