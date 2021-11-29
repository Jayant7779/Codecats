#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sp " "
using namespace std;
                //Jewels And Stones

int main(){
    string jewels,stones;
    cin >> jewels >> stones ;
    vector<int> hash(52);
    
    for(int i=0; i<jewels.size(); ++i){
        if(jewels[i] <= 90){
            hash[jewels[i] - 'A']++;
        }
        else{
            hash[jewels[i] - 'F']++;
        }
    }
    
    int count = 0;

    for(auto i : stones){
        if(i <= 90){
            if(hash[i - 'A'] != 0)count++;
        }
        else{
            if(hash[i - 'F'] != 0)count++;
        }
    }
    cout << count ;
    return 0;
}