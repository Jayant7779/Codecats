#include<bits/stdc++.h>
using namespace std;

string isArmstrong(uint64_t n){
    uint64_t sum = 0,check=n;

    while(n){
        sum += pow(n%10,3);
        n /= 10;
    }
    if(sum == check){
        return "Armstrong";
    }
    return "not armstrong";
}
int main(){
    uint64_t n;
    cin>>n;
    cout<<isArmstrong(n);
    return 0;
}