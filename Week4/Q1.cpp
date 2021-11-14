#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define vll vector<ll> 
#define sp " "
#define endl "\n"
using namespace std;

void reverseArray(vll &arr){
    vll arr1;
    for(int i=arr.size()-1; i>=0; --i){
        arr1.push_back(arr[i]);
    }
    arr = arr1;
}
int main(){
    int n,i=0;
    cin>>n;
    vll arr(n);
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
    reverseArray(arr);
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<sp;
    }
    return 0;
}
