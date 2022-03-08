#include <bits/stdc++.h>
using namespace std;

void f(int i, int x)
{
    i *= x;
    cout << "i= " << i << endl;
    cout << "x= " << x << endl;
}

int main()
{
    int i = 10;
    int x = 2;
    {
        int i = 10;
        int x = 2;
    }
    f(i, x);
    cout << "i= " << i << endl;
    cout << "x= " << x << endl;

    return 0;
}