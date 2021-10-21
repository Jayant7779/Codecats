#include<bits/stdc++.h>
using namespace std;
                                                // ax2 + bx + c = 0  // x1 = ( -b + sqrroot(d) )/ 2a , x2 = ( -b - (sqrroot(d))/2a)
vector<int> roots(int a, int b, int c){
    vector<int> ret;
    int disc = (pow(b,2)) - (4 * a * c) ;
    if(disc >= 0){
        int x1 = ( (-b + sqrt(disc)) / (2 * a) ) ;
        ret.push_back(x1);
        int x2 = ( (-b - sqrt(disc)) / (2 * a) ) ;
        ret.push_back(x2);

        return ret;
    }

    return ret;

}
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    vector<int> result(2);
    result = roots(a,b,c);

    cout<<result[0]<<" "<<result[1];
    
}