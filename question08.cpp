//guess the output

#include<bits/stdc++.h>
using namespace std;
int main(){
    int first = 8;
    int second = 11;
    int *third= &second;
    first = *third;
    *third = *third + 2;
    cout<< first <<" "<<second<< endl;
return 0;
}

// 1.  8 11
// 2.  10 11
// 3.  11 13 -->
// 4.  13 13