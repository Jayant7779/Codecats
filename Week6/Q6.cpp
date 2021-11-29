#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sp " "
using namespace std;

                //Goal Parser Interpretation

int main() {
    string str;
    cin >> str;
    string res;
    for(int i=0; i<str.size(); ++i){
        if(str[i] == '(' && str[i+1] == ')'){
            res += 'o';
            i++;
        }
        else if(str[i] == '(' && str[i+1] == 'a'){
            res += "al";
            i += 3;
        }
        else{
            res += str[i];
        }
    }
    str = res ;
    cout << str ;
    return 0;
}