//guess the output

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={11,21,31,41};
    int *ptr = arr++;
    cout<< *ptr <<endl;
return 0;
}

// 1. 11
// 2. 21
// 3. 31
// 4. error-->