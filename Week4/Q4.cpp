#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define vll vector<ll> 
#define sp " "
#define endl "\n"
using namespace std;
vll twoSum(vll arr, ll target){
    vll res={-1,-1};
    int st=0,en=arr.size()-1;
    while(st<en){
        if(arr[st] + arr[en] == target){
            res[0]=st;
            res[1]=en;
            return res;
        }
        if(arr[st]+arr[en] < target){
            st++;
        }
        if(arr[st] + arr[en] > target){
            en--;
        }
    }
    return res;
}
int main(){
    int n;
    ll target;
    cin>>n;
    vll arr(n);
 
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        
    }
    cin>>target;
    vll res = twoSum(arr,target);
    cout<<res[0]<<sp<<res[1]<<endl;
    return 0;
}