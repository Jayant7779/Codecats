#include<bits/stdc++.h>
using namespace std;
                                                        // Valid for 0-20 

uint64_t factorial(int n){
    uint64_t fact = 1;
    if(n == 1 || n==0){
        return 1;
    }
    return n * factorial(n -1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}