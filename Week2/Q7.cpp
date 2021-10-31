#include<bits/stdc++.h>
using namespace std;

void factorial(uint64_t n){
    int noOfZeros = 0;
    int power = 5;
    while(power <= n){
        noOfZeros += n/power;
        power *= 5;
    }
    cout<<noOfZeros<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    uint64_t n;
    cin>>n;
    factorial(n);
    }
    return 0;
}