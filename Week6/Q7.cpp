#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sp " "
using namespace std;

                    // Almost Equivalent Strings

bool checkAlmostEquivalent(string word1, string word2) {
    vector<int> hash1(26),hash2(26);
    for(int i=0,j=0; i<word1.size(); ++i,++j){
        hash1[word1[i] - 'a']++;
        hash2[word2[j] - 'a']++;
    }
    for(int i=0; i<26; ++i){
        if(abs(hash1[i] - hash2[i]) >3){
            return 0;
        }
    }
    return 1;
    
}



int main(){
    string word1,word2;
    cin >> word1 >> word2;
    bool res = checkAlmostEquivalent(word1,word2);
    if(res){
        cout << "Almost Equivalent";
    }
    else{
        cout << "NOt Equivalent" ;
    }
    return 0;
}