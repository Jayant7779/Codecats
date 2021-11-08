#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;
                        // function will return an array of size 2 at index 0 the largest element and at 1 the smallest element
vll largestAndSmallest(vll arr){
    ll max = arr[0],min=arr[0];           // 0 is not initalized incase all the elements are negative in max and positive in min
    
    rep(i,arr.size()){
        max = arr[i] > max ? arr[i] : max ;
        min = min > arr[i] ? arr[i] : min ;
    }
    vll res = {max,min};
    return res;
}
                                // Approach used :- first sorted the array in O(nlogn) time then O(n) time printed the elements 
                                // Overall time complexity O(n^2 logn)
                                // Another assumption not all elements are same
vll secLargestAndSecSmallest(vll arr){
    
    sort(arr.begin(),arr.end());
    ll secMin = arr[0],secMax = arr[arr.size()-1];
    int minflag = 0,maxflag=0;
    
    rep(i,arr.size()){
        if(secMin < arr[i] && minflag == 0)
        {
            secMin = arr[i];
            minflag = 1;
        }
        if(secMax > arr[arr.size()-1-i] && maxflag == 0){
            secMax = arr[arr.size()-1-i];
            maxflag = 1;
        }
        if(minflag == 1 && maxflag == 1){
            break;
        }
    }
    vll res = {secMax,secMin};
    return res;
}
int main(){
    int n;
    cin>>n;
    vll arr(n);
    rep(i,n){
        cin>>arr[i];
    }
    // vll res = largestAndSmallest(arr);
    vll res = secLargestAndSecSmallest(arr);
    rep(i,res.size()){
        cout<<res[i]<<" ";
    }
    return 0;
}