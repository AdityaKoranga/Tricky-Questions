//guess the ouptut

#include<bits/stdc++.h>
using namespace std;
int main(){
    float f= 12.5;
    float p= 21.5;
    float* ptr= &f;
    *ptr = p;
    cout<< *ptr <<" "<< f <<" "<< p << endl;
return 0;
}

// 1. 12.5 12.5 21.5
// 2. 21.5 12.5 21.5
// 3. 12.5 12.5 12.5
// 4. 21.5 21.5 21.5 -->