#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

void TextColor(int x)//X là mã màu Hàm đổi màu
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}

void input(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        if(a[i]%2 == 0)
        {
            TextColor(6);
            cout << a[i] << " ";
        }
        else
        {
            TextColor(7);
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int a[100], n;
    cin >> n;
    input(a, n);
    solve(a, n);
    return 0;
}
