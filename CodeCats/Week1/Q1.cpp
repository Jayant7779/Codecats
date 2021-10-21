#include<bits/stdc++.h>
using namespace std;

int isOdd(uint64_t n){
    return n & 1;
}
int main(){
    uint64_t n;
    cin>>n;
    if(isOdd(n)){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }

    return 0;
}