#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define vll vector<ll> 
#define sp " "
#define endl "\n"
using namespace std;
int searchInsertPos(vll arr, ll target,int st, int en){
    
    
    while(st < en){
        int mid = (st + en)/2;
        if(target == arr[mid]){
        return mid;
        }
        if(target > arr[mid]){
            st = ++mid;
        }
        if(target < arr[mid]){
            en = mid;
        }
    }
    return st;
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
    cout<<searchInsertPos(arr,target,0,arr.size());
    return 0;
}