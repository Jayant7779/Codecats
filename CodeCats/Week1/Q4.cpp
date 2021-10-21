#include<bits/stdc++.h>
using namespace std;

string isLeap(uint64_t year){
    if(year % 100){
        string ret = (year % 4 == 0)? "Leap year" : "Not a Leap year";
        return ret;
    }
    if(year % 400){
        return "Not a Leap year";
    }
    return "Leap Year";
}
int main(){
    uint64_t year;
    cin>>year;
    cout<<isLeap(year);
    return 0;
}