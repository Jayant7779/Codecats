#include<bits/stdc++.h>
using namespace std;

int64_t isMax(int64_t a, int64_t b, int64_t c){
    if(a > b){
        if(a > c){
            return a;
        }
        else{
            return c;
        }
    }
    
    if(b > c){
        return b;
    }
        
    return c;

}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<isMax(a,b,c);
    return 0;
}