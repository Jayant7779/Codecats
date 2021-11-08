#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;
                                // Working Explained:-
                                // Input 
                                // n (size of the array)
                                // n elements of the array
                                // Output
                                // single number
ll sumOfArray(vll arr){
    ll sum = 0;
    rep(i,arr.size()){
        sum+= arr[i];
    }
    return sum;
}
    // In this prog -9 will be treated as odd and -8 as even
void sumOfOddEven(vll arr){
    ll oddSum = 0,evenSum= 0;
    rep(i,arr.size()){
        if(arr[i] & 1){
            oddSum += arr[i];
        }
        else{
            evenSum += arr[i];
        }
    }
    cout<<"\nSum of odd nos. in array:- "<<oddSum<<"\nSum of even nos. in array:- "<<evenSum;
}
    // Here first index is 0 and treated as even 

void sumOfOddevenIndex(vll arr){
    ll oddSum = 0,evenSum = 0;
    rep(i,arr.size()){
        if(i & 1){
            oddSum += arr[i];
        }
        else{
            evenSum += arr[i];
        }
    }
    cout<<"\nSum of odd indexes in array:- "<<oddSum<<"\nSum of even indexes in array:- "<<evenSum;
}
int main(){
    int n;
    cin>>n;
    vll arr(n);
    rep(i,n){
        cin>>arr[i];
    }
    cout<<sumOfArray(arr);
    sumOfOddEven(arr);
    sumOfOddevenIndex(arr);
    return 0;
}
