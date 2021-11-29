#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sp " "
using namespace std;
                                    //extra character
int main(){
    string a,b;
    cin >> a >> b;
    int sumA=0,sumB=0;
    for(auto i : a){
        sumA += i;
    }
    for(auto i : b){
        sumB += i;
    }
    cout << (char)(sumB - sumA) << endl;
    return 0;
}