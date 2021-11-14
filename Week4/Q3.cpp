#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define vll vector<ll> 
#define sp " "
#define endl "\n"
using namespace std;

void rotateArray(vll &arr, int k){
    k = k % arr.size();
    k = arr.size()-k;
    vll temp;
    for(int i=k; i<arr.size(); ++i){
        temp.push_back(arr[i]);
    }
    for(int i=0; i<k; ++i){
        temp.push_back(arr[i]);
    }
    arr = temp;
}



int main(){
    int n,k;
    cin>>n;
    vll arr(n);
 
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        
    }
    cin>>k;
    rotateArray(arr,k);
    for(int i=0; i<arr.size(); ++i){
        cout<<arr[i]<<sp;
        
    }
    return 0;
}