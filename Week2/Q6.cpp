#include<bits/stdc++.h>
using namespace std;

void power(int base, int exp){
    if(exp == 0){
        cout<<1;
        return;
    }
    uint64_t poer = base;
    for(int i=2; i<= exp; ++i){
        poer *= base;
    }
    cout<<poer;
}
int main(){
    int base,exp;
    cout<<"Base: ";
    cin>>base;
    cout<<"Exp: ";
    cin>>exp;
    cout<<"Power: ";
    power(base,exp);
    return 0;
}