#include<bits/stdc++.h>
using namespace std;

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

    if(r != c){
        cout << "Diagonals not possible";
        return 0;
    }

    // Print Diagonals

    for(int i = 0 ; i < r ; ++i){
        cout << A[i][i] << " ";
        if( (r % 2 == 0 ) || ((r/2) != i)){
            cout << A[i][r-1-i] << " ";
        }
        cout << endl ;
    }


}