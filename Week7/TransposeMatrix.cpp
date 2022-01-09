#include<bits/stdc++.h>
using namespace std;


void transpose(vector<vector<int>> &arr){
    for(int i = 0 ; i < arr.size() ; ++i){
        for(int j = 0 ; j < i ; ++j){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int>> A(r);

    for(int i = 0 ; i < r ; ++i){
        A[i].resize(c);

        for(int j = 0 ; j < c ; ++j){
            cin >> A[i][j];
        }
    }

    // Transpose of a Matrix
    if(r != c){
        cout << "Transpose of a matrix is not possible.";
        return 0 ;
    }

    transpose(A);

    for(int i = 0 ; i < r ; ++i){
        for(int j = 0 ; j < c; ++j){
            cout << A[i][j]  << " ";

        }
        cout << endl ;
    }

}