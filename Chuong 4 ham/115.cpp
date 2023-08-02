#include<bits/stdc++.h>
using namespace std;

void solve(string s, double t, double v, double kq)
{
    cout << "Nhap ho ten: ";
    getline(cin, s);
    cout << "Nhap diem toan: ";
    cin >> t;
    cout << "Nhap diem van: ";
    cin >> v;
    kq = (t+v)/2;
    cout << "Ho ten hoc sinh: " << s << endl;
    cout << "Diem trung binh toan van: " << kq << endl;
}

int main()
{
    string s;
    double t, v, kq;
    solve(s, t, v, kq);
    return 0;
}
