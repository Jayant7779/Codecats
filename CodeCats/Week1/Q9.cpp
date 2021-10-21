#include<bits/stdc++.h>
using namespace std;

char grade(double avg){
    if(avg >= 90){
        return 'A';
    }
    if(avg >= 80){
        return 'B';
    }
    if(avg >= 70){
        return 'C';
    }
    if(avg >= 60){
        return 'D';
    }
    if(avg >= 40){
        return 'E';
    }
    return 'F';
}
void percentageAndGrade(vector<int> marks){
    double avg,total ;

    for(int i=0; i<5; i++){
        total += marks[i];
    }

    avg = total / 5;

    cout<<"Percentage: "<<avg<<" Grade: "<<grade(avg);
}
int main(){
    vector<int> marks;
    unsigned m;
    cout<<"Enter marks :-"<<endl;
    
    for(int i=0; i<5; i++){
        cin>>m;
        marks.push_back(m);
    }
    percentageAndGrade(marks);

    return 0;
}