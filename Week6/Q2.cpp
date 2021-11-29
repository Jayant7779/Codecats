#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sp " "
using namespace std;

                    // Duck Number

int main(){
    string str;
    cin >> str;
    
    int curr = 0;
    for(int i=0; i<str.size() ; ++i){
        if(str[i] > 48){
            curr = i;
            break;
        }
    }
    for(int i=curr+1; i<str.size(); ++i){
        if(str[i] == 48){
            cout << "Duck Number" ;
            curr = str.size();
            break;
        }
    }
    if(curr != str.size())cout << "Not a Duck Number" ;
    return 0;
}