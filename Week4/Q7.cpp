#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define vll vector<ll> 
#define sp " "
#define endl "\n"
using namespace std;
void pretext(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
ll finalPos(ll x, ll n){
    ll jumpPos = n % 4,fPos = x;
    for(int i=1; i<=jumpPos; ++i){
        if(fPos  & 1){
            fPos += n-jumpPos+i;
        }
        else{
            fPos -= n-jumpPos+i;
        }
    }
    return fPos;
}
int main(){
    pretext();
    int t;
    ll x,n;
    cin>>t;
    while(t--){
        cin>>x>>n;
        cout<<finalPos(x,n)<<endl;
    }
    
    return 0;

}