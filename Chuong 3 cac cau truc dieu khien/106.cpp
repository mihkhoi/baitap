#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, t1;
    do
    {
        cin >> n;
    }while(n<100 || n > 999);
    t = n%10;
    n /= 10;
    t1 = n%10;
    n /= 10;
    if(n == 1)
    {
        cout << "Mot tram ";
    }
    else if(n == 2)
    {
        cout << "Hai tram ";
    }
    else if(n == 3)
    {
        cout << "Ba tram ";
    }
    else if(n == 4)
    {
        cout << "Bon tram ";
    }
    else if(n == 5)
    {
        cout << "Nam tram ";
    }
    else if(n == 6)
    {
        cout << "Sau tram ";
    }
    else if(n == 7)
    {
        cout << "Bay tram ";
    }
    else if(n == 8)
    {
        cout << "Tam tram ";
    }
    else
    {
        cout << "Chin tram ";
    }
    
    if(t1 == 0 && t == 0)
    {
        goto q1;
    }
    else if(t1 == 0)
    {
        cout << "linh ";
    }
    else if(t1 == 1)
    {
        cout << "muoi ";
    }
    else if(t1 == 2)
    {
        cout << "hai muoi ";
    }
    else if(t1 == 3)
    {
        cout << "ba muoi ";
    }
    else if(t1 == 4)
    {
        cout << "bon muoi ";
    }
    else if(t1 == 5)
    {
        cout << "nam muoi ";
    }
    else if(t1 == 6)
    {
        cout << "sau muoi ";
    }
    else if(t1 == 7)
    {
        cout << "bay muoi ";
    }
    else if(t1 == 8)
    {
        cout << "tam muoi ";
    }
    else if(t1 == 9)
    {
        cout << "chin muoi ";
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
