#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 0;
    for (; num < 2; num++)
    {
        cout << num << endl;
    }
    cout << num << endl;
    for (; num /*true*/; num--)
    {
        cout << num << endl;
    }
    cout << num << endl;
    num += 7;
    cout << "num= " << num;
    return 0;
}