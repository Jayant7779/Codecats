#include<bits/stdc++.h>
using namespace std;

void naturalNumbers(int n){
    int sum=0,oddSum=0;
    for(int i=1; i<=n; ++i){
        cout<<i<<" ";
        sum += i;
        if(i & 1){
            oddSum+=i;
        }
    }
    cout<<endl<<"The Sum : "<<sum;
    cout<<endl<<"The Sum of Odd nos: "<<oddSum;
    cout<<endl<<"The Sum of Even nos: "<<sum-oddSum;
}
int main(){
    int n;
    cin>>n;
    naturalNumbers(n);
}