#include<bits/stdc++.h>
using namespace std;

string isChar(char ch){
    if( (ch >=65 && ch <= 90) || (ch >=97 && ch <=122) ){
        return "Alphabet";
    }
    if( (ch >= 48) && (ch <= 57)){
        return "Digit";
    }
    return "Special Character";
}
int main(){
    char ch;
    cin>>ch;
    cout<<isChar(ch);
    return 0;
}