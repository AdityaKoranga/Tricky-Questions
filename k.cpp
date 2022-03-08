#include <bits/stdc++.h>
using namespace std;

int main()
{
    int var = 1;
    for (;;)
    {
        cout << ++var << endl;
        if (var > 6)
        {
            break;
        }
    }
    cout << "value pf variable is :" << var;
}