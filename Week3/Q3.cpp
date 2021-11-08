#include<bits/stdc++.h>
#define rep(i,n) for(int i=1; i<=n; i++)
using namespace std;

void printPyramid(int n){
    
    rep(i,n){
        int k = 1;
        while((k++)+i<=n){
            cout<<" ";
        }
        rep(j,2*i-1){
            
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    printPyramid(n);
    return 0;
}