#include<bits/stdc++.h>
using namespace std;

void printLowerTriangle(vector<vector<int>> &matrix){
  
    for(int i = 0 ; i < matrix.size() ; ++i){
        
        for(int j = 0 ; j < matrix[i].size() ; ++j){
            if(j <= i){
                cout << matrix[i][j] << " ";
            }
            else{
                cout << 0 << " ";
            }
         
        }
        cout << endl ;
        
    }

}

int main(){
    int r ;
    cin >> r ;

    vector<vector<int>> matrix(r);

    for(int i = 0 ; i < r ; ++i){
        vector<int> input(r);
        for(int j = 0 ; j < r ; ++j){
            cin >> input[j] ;
        }
        matrix[i] = input;
    }

   printLowerTriangle(matrix);
}