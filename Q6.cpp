#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;

int countFreq(vll arr,ll val){
    int count = 0;
    rep(i,arr.size()){
        if(val == arr[i])count++;
    }
    return count;
}
int main(){
    int n;
    ll val;
    cin>>n;
    vll arr(n);
    rep(i,n){
        cin>>arr[i];
    }
    cin>>val;
    cout<<countFreq(arr,val);
    return 0;
}