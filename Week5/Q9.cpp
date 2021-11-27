#include<bits/stdc++.h>

                        //Palindrome using pointers
int  isPalin(int *p){
    int temp = *p;

    int rem=0;
    while(temp){
        rem = (rem * 10) + (temp)%10;
        temp /= 10;
    }
    return rem==*p ? 1: 0;
}
int main(){
    int num;
    scanf("%d",&num);
    int *ptr = &num;
    printf("%d",isPalin(ptr));

    return 0;
}