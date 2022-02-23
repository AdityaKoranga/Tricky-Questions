//guess the output

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch='a';
    char* ptr = &ch;
    ch++;
    cout<< *ptr << endl;

return 0;
}

// 1. a
// 2. b -->
// 3. a+1
// 4. error