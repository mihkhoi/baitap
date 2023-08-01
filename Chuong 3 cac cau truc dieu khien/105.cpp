#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    do
    {
        cin >> n;
    }while(n<10 || n > 99);
    t = n%10;
    n /= 10;
    if(n == 1)
    {
        cout << "Muoi ";
    }
    else if(n == 2)
    {
        cout << "Hai muoi ";
    }
    else if(n == 3)
    {
        cout << "Ba muoi ";
    }
    else if(n == 4)
    {
        cout << "Bon muoi ";
    }
    else if(n == 5)
    {
        cout << "Nam muoi ";
    }
    else if(n == 6)
    {
        cout << "Sau muoi ";
    }
    else if(n == 7)
    {
        cout << "Bay muoi ";
    }
    else if(n == 8)
    {
        cout << "Tam muoi ";
    }
    else
    {
        cout << "Chin muoi ";
    }
    if(n == 0)
    {
        goto q1;
    }
    else if(t == 1)
    {
        cout << "mot";
    }
    else if(t == 2)
    {
        cout << "hai";
    }
    else if(t == 3)
    {
        cout << "ba";
    }
    else if(t == 4)
    {
        cout << "bon";
    }
    else if(t == 5)
    {
        cout << "nam";
    }
    else if(t == 6)
    {
        cout << "sau";
    }
    else if(t == 7)
    {
        cout << "bay";
    }
    else if(t == 8)
    {
        cout << "tam";
    }
    else if(t == 9)
    {
        cout << "chin";
    }
    q1:
    return 0;
}
