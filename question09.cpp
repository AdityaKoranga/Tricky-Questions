//Guess the output

void update(int *p){
    *p = (*p) *2;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=10;
    update(&i);
    cout<< i <<endl;
return 0;
}

// 1. 10
// 2. 40
// 3. 20 -->
// 4. 100