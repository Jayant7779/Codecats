#include<bits/stdc++.h>
using namespace std;

void matrixMul(vector<vector<int>> &A , vector<vector<int>> &B, vector<vector<int>> &C){
    for(int k = 0 ; k < A.size(); ++k){
        
        for(int j = 0 ; j < B[0].size(); ++j){
            
            for(int i = 0 ; i < A[0].size() ; ++i){
                C[k][j] += A[k][i] * B[i][j];
            }
            cout << C[k][j] << " ";
        }
        cout << endl ;
    }
}

int main(){
    int r,c;
    cin >> r >> c;
    int r1,c1;
   
    cin >> r1 >> c1 ;
    vector<vector<int>> A(r),C(r);

    for(int i = 0 ; i < r ; ++i){
        A[i].resize(c);
        C[i].resize(c1);
        for(int j = 0 ; j < c ; ++j){
            cin >> A[i][j];
        }
    }
    
    vector<vector<int>> B(r1);
    for(int i = 0 ; i < r1 ; ++i){
        B[i].resize(c1);

        for(int j = 0 ; j < c1 ; ++j){
            cin >> B[i][j];
        }
    }
    if(c != r1){
        cout << "Matrix multiplication doesnot possible ";
        return 0;
    }

    matrixMul(A,B,C);

   

}