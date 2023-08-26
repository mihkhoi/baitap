#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
}

void solve1(int a[], int b[], int n)
{
    int t, n1, m = 0, h = 0, b1 = 0, b2 = 0, n2 = 0, s = 0, b3 = 0, t1 = 0, c = 0, k = 0;
    for(int i = 0;i < n;i++)
    {
        n1 = abs(a[i]);
        while(n1 > 0)
        {
            t = n1%10;
            if(t == 1)
            {
                m++;
            }
            if(t == 2)
            {
                h++;
            }
            if(t == 3)
            {
                b1++;
            }
            if(t == 4)
            {
                b2++;
            }
            if(t == 5)
            {
                n2++;
            }
            if(t == 6)
            {
                s++;
            }

            if(t == 7)
            {
                b3++;
            }
            if(t == 8)
            {
                t1++;
            }
            if(t == 9)
            {
                c++;
            }
            if(t == 0)
            {
                k++;
            }
            n1 /= 10;
        }
    }
    b[0] = k;
    b[1] = m;
    b[2] = h;
    b[3] = b1;
    b[4] = b2;
    b[5] = n2;
    b[6] = s;
    b[7] = b3;
    b[8] = t1;
    b[9] = c;
}

void solve2(int b[])
{
    cout << "So lan xuat hien: " << endl;
    for(int i = 0;i < 10;i++)
    {
        cout << "So " << i << " lan xuat hien: " << b[i] << endl;
    }
}

int solve(int b[])
{
    int min = 1000, vt;
    for(int i = 0;i < 10;i++)
    {
        if(b[i] > 0)
        {
            if(b[i] < min)
            {
                min = b[i];
                vt = i;
            }
        }
    }
    return vt;
}

int main()
{
    int a[100], b[100], c[100], n;
    cin >> n;
    nhap(a, n);
    solve1(a, b, n);
    solve2(b);
    cout << solve(b);
    return 0;
}
