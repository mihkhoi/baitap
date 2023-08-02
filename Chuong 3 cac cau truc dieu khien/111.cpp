#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n + i - 1;j++)
        {
            if(j < n - i + 1)
            {
                cout << "  ";
            }
            else
            {
                cout << " *";
            }
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n + i - 1;j++)
        {
            if(j == n - i + 1 || j == n + i - 1 || i == n)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1;i <= n+1;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            if(j == i || j == 1 || i == n+1)
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
