#include<bits/stdc++.h>
using namespace std;
                                                // Denominations used 2000,500,200,100,50,20,10,5,2,1
void countNotes(unsigned long amt){
    
    if(amt >= 2000){
        int n2000 = amt / 2000;
        cout<<"Rs 2000 notes : "<<n2000<<endl;
        amt %= 2000;
    }
    if( amt >= 500){
        int n500 = amt / 500;
        cout<<"Rs 500 notes : "<<n500<<endl;
        amt %= 500;
    }
    if( amt >= 200){
        int n200 = amt / 200;
        cout<<"Rs 200 notes : "<<n200<<endl;
        amt %= 200;
    }
    if(amt >= 100){
        int n100 = amt / 100;
        cout<<"Rs 100 notes : "<<n100<<endl;
        amt %= 100;
    }
    if(amt >= 50){
        int n50 = amt / 50;
        cout<<"Rs 50 notes : "<<n50<<endl;
        amt %= 50;
    }
    if(amt >= 20){
        int n20 = amt / 20;
        cout<<"Rs 20 notes : "<<n20<<endl;
        amt %= 20;
    }
    if(amt >= 10){
        int n10 = amt / 10;
        cout<<"Rs 10 notes : "<<n10<<endl;
        amt %= 10;
    }
    if(amt >= 5){
        int n5 = amt / 5;
        cout<<"Rs 5 notes : "<<n5<<endl;
        amt %= 5;
    }
    if(amt >= 2){
        int n2 = amt / 2;
        cout<<"Rs 2 notes : "<<n2<<endl;
        amt %= 2;
    }
    if(amt >= 1){
    cout<<"Rs 1 notes : "<<amt;
    }
    
}
int main(){
    unsigned long amt;
    cin>>amt;
    
    countNotes(amt);

    return 0;
}