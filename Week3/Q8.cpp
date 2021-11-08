#include<bits/stdc++.h>
using namespace std;
#define  ull unsigned long long
#define vi vector<int> 
#define rep(j,n) for(int j=0; j<n; ++j)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    

void pretext(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
int coinFlip(int i,int n, int q){
    if(n & 1 == 1 && q == 1 ){
        if(i==1)
        return n/2;
        else
        return (n+1)/2;
    }
    else if(n & 1 == 1 && q == 2){
        if(i==1)
        return (n+1)/2;
        else
        return n/2;
    }
    else 
    return n/2;
}
int main(){
    // pretext();
    int t,g,n,i,q;
    cin>>t;
    while(t--){
        cin>>g;
        while(g--){
            cin>>i>>n>>q;
            cout<<coinFlip(i,n,q)<<"\n";
        }
        
    }
    return 0;
}