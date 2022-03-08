#include <bits/stdc++.h>
using namespace std;

int main()
{
    float val1 = 2.3f, val2 = 4.5f, val3 = 1.2f;
    float num = 0.0f;
    int rem = 0;
    num = val1 + val2 / val3;
    cout << "num=" << num << endl;
    rem = num % 10;
    cout << "rem= " << rem;

    return 0;
}