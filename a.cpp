#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 12;
    int ans = (k > 10) ? (k++) : --k;
    cout << ans;
    return 0;
}