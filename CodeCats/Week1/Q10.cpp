#include<bits/stdc++.h>
using namespace std;
                                        //Basic <= 10000: HRA = 20% DA = 80%
                                        //Basic <= 20000: HRA = 25% DA = 90%
                                        //Basic > 20000: HRA = 30% DA = 95%
double grossSalary(double basicSal){
    double hra,da,grs;
    if(basicSal > 20000){
        hra = basicSal * 1.3 ;
        da = basicSal  * 1.95;
        grs = basicSal + hra + da;
        return grs;
    }
    if(basicSal > 10000){
        hra = basicSal * 1.25 ;
        da = basicSal * 1.90;
        grs = basicSal + hra + da;
        return grs;
    }
    hra = basicSal * 1.2;
    da = basicSal * 1.8;
    grs = basicSal + hra + da;
    return grs;
}
int main(){
    double basicSal;
    cin>>basicSal;

    cout<<grossSalary(basicSal);
    
    return 0;
}