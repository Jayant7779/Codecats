#include<bits/stdc++.h>
#define rep(i,n) for(int i=1; i<=n; i++)
using namespace std;

void printStaircase(int n){
    rep(i,n){
        rep(j,i){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    printStaircase(n);
    return 0;
}