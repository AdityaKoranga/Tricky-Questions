#include <bits/stdc++.h>
using namespace std;

void f(int &, int);

int main()
{
    int y = 20;
    int z = 30;

    f(y, z);
    cout << "y= " << y << " z=" << z;

    return 0;
}

void f(int &a, int b)
{
    if (b == 30)
    {
        a = (a < 50) ? 50 : a;
        b = 40;
    }
    else if (b == 40)
    {
        a = 60;
        b = 60;
    }
}