#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define vll vector<ll> 
#define sp " "
#define endl "\n"
using namespace std;

int main(){
    int n;
    ll target;
    cin>>n;
    vll arr(n),a0,a1,a2;
 
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        if(arr[i] > 1){
            a2.push_back(arr[i]);
        }
        else if(arr[i]<1){
            a0.push_back(arr[i]);
        }
        else{
            a1.push_back(arr[i]);
        }
    }
    arr = a0;
    arr.resize(n);
    for(int i=0; i<a1.size(); ++i){
        arr[i+a0.size()]=a1[i];
    }
    for(int i=0; i<a2.size(); ++i){
        arr[i+a1.size()+a0.size()]=a2[i];
    }
    for(int i=0; i<arr.size(); ++i){
        cout<<arr[i]<<sp;
    } 
    return 0;
}