#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5, y = 10, z = 15, b = 20, c = 25;
    int a = ((x + (((y * z) / 4) % 2)) - 1) || (++b && c--);
    cout << "a=" << a << " ,b=" << b << " ,c=" << c;
  
    return 0;
}