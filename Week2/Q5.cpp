#include<bits/stdc++.h>
using namespace std;

void rev(int64_t n)
{
    int64_t temp = n,revr=0;
    while(n){
       revr = revr*10 + (n%10) ;
       n /= 10;
    }
    cout<<"Reverse of "<<temp<<" is : "<<revr;
}
int main(){
    int64_t n;
    cin>>n;
    rev(n);
    return 0;
}