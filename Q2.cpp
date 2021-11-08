#include<bits/stdc++.h>
#define rep(i,n) for(int i=1; i<=n; i++)
using namespace std;

void printPattern(int n){
    rep(i,n){
        rep(j,n-i+1){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}