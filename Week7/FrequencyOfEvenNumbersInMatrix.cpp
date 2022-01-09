#include<bits/stdc++.h>
using namespace std;

int countEvenFreq(vector<vector<int>> &matrix){
    int count = 0 ;
    for(int i = 0 ; i < matrix.size() ; ++i){
        
        for(int j = 0 ; j < matrix[i].size() ; ++j){
            if(!(matrix[i][j] & 1))count++;
        }
        
    }
    return count ;
}

int main(){
    int r , c ;
    cin >> r >> c;

    vector<vector<int>> matrix(r);

    for(int i = 0 ; i < r ; ++i){
        vector<int> input(c);
        for(int j = 0 ; j < c ; ++j){
            cin >> input[j] ;
        }
        matrix[i] = input;
    }

    cout << countEvenFreq(matrix);
}