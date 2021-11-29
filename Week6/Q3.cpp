#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sp " "
using namespace std;

                        // Subsequence

int main() {
    string str;
    cin >> str;
    int k;
    cin >> k;
    vector<int> hash(26);
    for(int i=0; i<str.size(); ++i){
        hash[str[i]-97]++;
    }
    for(auto i : str){
        if(hash[i - 97] >= k)
        cout << i ;
    }
    return 0;
}