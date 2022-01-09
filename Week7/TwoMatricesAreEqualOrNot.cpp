#include<bits/stdc++.h>
using namespace std;

void isMatriceEqual(vector<vector<int>> &A , vector<vector<int>> &B) {
    if( (A.size() != B.size()) ||  (A[0].size() != B[0].size()) ){
        cout << "Not Equal" << " ";
        return;
    }

    for(int i = 0 ; i < A.size() ; ++i){
        for(int j = 0 ; j < A[i].size() ; ++j){
            if(A[i][j] != B[i][j]){
                cout << "Not Equal" << " ";
                return;
            }
        }
    }

    cout << "Equal" << " ";
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

    int r1 , c1 ;
    cin >> r1 >> c1;

    vector<vector<int>> matrix1(r1);

    for(int i = 0 ; i < r1 ; ++i){
        vector<int> input(c1);
        for(int j = 0 ; j < c1 ; ++j){
            cin >> input[j] ;
        }
        matrix1[i] = input;
    }
    
    isMatriceEqual(matrix,matrix1);
    
}