#include<bits/stdc++.h>
using namespace std;

string weekday(unsigned short weeknumber){
    switch(weeknumber){
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5: 
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
    }
    return "Not a valid input.";
}
int main(){
    unsigned short weeknumber;
    cin>>weeknumber;

    
    cout<<weekday(weeknumber);
    

    return 0;
}