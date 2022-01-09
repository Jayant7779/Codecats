#include<bits/stdc++.h>
using namespace std;

void isIdentityMatrix(vector<vector<int>> &A){

    if(A.size() != A[0].size()){
        cout << "Not Identity Matrix" << " ";
        return ;
    }

    for(int i = 0 ; i < A.size() ; ++i){
        for(int j = 0 ; j < A[i].size() ; ++j){
            if( ((i == j) && (A[i][j] != 1)) || ( ( i != j) && A[i][j] != 0)  ){
                cout << "Not Identity Matrix" << " ";
                return ;
            }
        }
    }

    cout << "Identity Matrix" << " ";

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

    isIdentityMatrix(matrix);
    

    
}