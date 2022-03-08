#include <bits/stdc++.h>
using namespace std;

int main()
{
    short x = -32768 + 1;
    short y = -x; // maximum value
    cout << y << endl;

    if (x != y)
        cout << "!=" << endl;
    else
        cout << "==" << endl;

    return 0;
}