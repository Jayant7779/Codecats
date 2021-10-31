#include<bits/stdc++.h>
using namespace std;

string isPrime(uint64_t n){
    for(int i=2; i<= sqrt(n); ++i){
        if(n % i == 0){
            return "No";
        }
    }
    return "Yes";
}
void printPrime(uint64_t n){
    for(int i=2; i<=n; ++i){
        string s = isPrime(i);
        if(s == "Yes"){
            cout<<i<<" ";
        }
    }
}
int main(){
    
    int ch;
    char isExiting;
    uint64_t n;
    do{
        cout<<"Press 1 to checkPrime \nPress 2 to printPrime in range \n";
        cin>>ch;
        
        cout<<"\nEnter the no: \n";
        cin>>n;
        
        if(n>1)
        switch(ch){
            case 1: cout<<isPrime(n);
                    break;
            case 2: printPrime(n);
                    break;
            
            default: cout<<"\n Invalid Choice\n";
        }
        cout<<"\nDo you want to continue(y/n): ";
        
        cin>>isExiting;

    }while(isExiting == 'y' || isExiting== 'Y');
    return 0;
}