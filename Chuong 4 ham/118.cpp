#include<bits/stdc++.h>
using namespace std;

void solve(string str, double t, double v, double kq)
{
    getline(cin, str);
    cin >> t >> v;
    kq = (t+v)/2;
    cout << "Ho ten hoc sinh: " << str << endl;
    cout << "Diem trung binh toan van: " << kq << endl;
}

int solve1(int n, int s = 0)
{
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        s += i;
    }
    return s;
}

int solve2(int n, int x, int s)
{
    cin >> x >> n;
    for(int i = 1;i <= n;i++)
    {
        s += pow(x, i);
    }
    return s;
}

int main()
{
    string str;
    double t, v, kq;
    int n, x, s = 0;
    solve(str, t, v, kq);
    cout << solve1(n, s) << endl;
    cout << solve2(n, x, s);
    return 0;
}
