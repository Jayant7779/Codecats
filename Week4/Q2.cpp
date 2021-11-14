#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define vll vector<ll> 
#define sp " "
#define endl "\n"
using namespace std;
map<ll,int> freq;
void frequencyArray(vll arr){
    
    for(int i=0; i<arr.size(); ++i){
        if(freq.count(arr[i])){
            freq[arr[i]] += 1;
        }
        else{
            freq[arr[i]] = 1;
        }
    }
    for(auto i=freq.begin(); i!=freq.end(); ++i){
        cout<<(*i).first<<sp<<(*i).second<<endl;
    }
}
void searchByElement(vll arr,ll largest){
    ll val;
    cout<<"Enter the value want to search: ";
    cin>>val;
    vector<bool> search(largest);
    for(int i=0; i<arr.size(); ++i){
        search[arr[i]-1]=true;
    }
    if(search[val-1] == true){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}
int main(){
    int n,i=0;
    cin>>n;
    vll arr(n);
    ll largest=0;
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        largest = max(largest,arr[i]);
    }
    frequencyArray(arr);
    searchByElement(arr,largest);
    
    return 0;
}
