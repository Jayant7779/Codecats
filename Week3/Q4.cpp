#include<bits/stdc++.h>
#define rep(i,n) for(int i=1; i<= n*2-1; ++i)
using namespace std;
                                //Assumptions made :-
                                // If user enter 5 as input the row & col will be treated as 5*2-1 i.e. 9. 
                                // 1 based index is used.
void printX(int n){
    rep(i,n){
        rep(j,n){
            if(i==j || i+j == 2*n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    printX(n);
    return  0;
}