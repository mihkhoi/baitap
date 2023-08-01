#include<bits/stdc++.h>
using namespace std;

double swtich(int n)
{
    return n > 0 ? n : -n;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << abs(a) << " "<< abs (b) << " " << abs (c) << endl;
    cout << swtich(a) << " ";
    cout << swtich(b) << " ";
    cout << swtich(c);
    return 0;
}
