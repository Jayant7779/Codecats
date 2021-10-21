#include<bits/stdc++.h>
using namespace std;

int64_t isMax(int64_t n1, int64_t n2){
    int64_t ret = (n1 >= n2) ? n1 : n2 ;
    return ret;
}
int main(){
    int64_t n1,n2;
    cin>>n1>>n2;
    cout<<isMax(n1,n2);
    return 0;
}