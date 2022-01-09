#include<bits/stdc++.h>
using namespace std;

void matrixAdd(vector<vector<int>> &A , vector<vector<int>> &B, vector<vector<int>> &C){
    for(int i = 0 ; i < A.size() ; ++i){
        for(int j = 0 ; j < A[i].size() ; ++j){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int>> A(r),B(r),C(r);

    for(int i = 0 ; i < r ; ++i){
        A[i].resize(c);
        C[i].resize(c);
        for(int j = 0 ; j < c ; ++j){
            cin >> A[i][j];
        }
    }

    for(int i = 0 ; i < r ; ++i){
        B[i].resize(c);
        for(int j = 0 ; j < c ; ++j){
            cin >> B[i][j];
        }
    }

    matrixAdd(A,B,C);

    for(int i = 0 ; i < C.size() ; ++i){
   
        for(int j = 0 ; j < C[i].size(); ++j){
            cout << C[i][j] << " ";
        }
        cout << endl ;
    }

}