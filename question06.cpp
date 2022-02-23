//guess the ouptut

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=534;
    int sum;
    if(a)
        sum= a % 9 == 0 ? 9 : a % 9;
    else    
        sum=0;
    cout<<"The final sum is"<<sum;
return 0;
}

// 1.  The final sum is 9
// 2.  The final sum is 0
// 3.  The final sum is true
// 4.  The final sum is 3 -->