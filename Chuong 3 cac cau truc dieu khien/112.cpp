#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i = 1;i <= b;i++)
    {
        for(int j = 1;j <= a;j++)
        {
            cout <<"* ";
        }
        cout << endl;
    }
    
    cout << endl;

    for(int i = 1;i <= b;i++)
    {
        for(int j = 1;j <= a;j++)
        {
            if(j == 1 || i == b || j == a || i == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
