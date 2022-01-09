#include<bits/stdc++.h>
using namespace std;
void sortRowWise(vector<vector<int>> &A){
    for(int i = 0 ; i < A.size() ; ++i){
        sort(A[i].begin(), A[i].end());
    }
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

    sortRowWise(matrix);

    for(auto &i : matrix){
        for(auto &j : i){
            cout << j << " ";
        }
        cout << endl ;
    }

    

    
}