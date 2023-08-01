#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)//tim uoc so cua n thi lay n chia cho tung so i neu so i nao chia het cho n thi i la uoc so cua n
        {
            cout << i << " ";
        }
    }
    return 0;
}
