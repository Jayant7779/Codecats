#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sp " "
#define pb push_back
using namespace std;

                    //Roman Numbers
/*
I - 1
V - 5
X - 10
L - 50
C - 100
D - 500
M - 1000
*/


vector<int> num = {1,5,10,50,100,500,1000};

int romanToNumbers(string str){
    vector<int> arr;
    int total = 0;
    for(int i=0; i<str.size(); ++i){
        switch(str[i]){
            case 'I' :arr.pb(0);
                    break;
            case 'V' :arr.pb(1);
                    break;
            case 'X' :arr.pb(2);
                    break;
            case 'L' :arr.pb(3);
                    break;
            case 'C' :arr.pb(4);
                    break;
            case 'D' :arr.pb(5);
                    break;
            case 'M' :arr.pb(6);
                    break;
        }
    }
    arr.pb(0);
    for(int i=0; i<arr.size()-1; ++i){
        if(arr[i] < arr[i+1]){
            total += num[arr[i+1]] - num[arr[i]];
            i++;
        }
        else{
            total += num[arr[i]];
        }
    }
    return total;
}
int main(){
    string str ;
    cin >> str;
    cout << romanToNumbers(str);
    return 0;
}