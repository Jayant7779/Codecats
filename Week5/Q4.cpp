#include<bits/stdc++.h>
// Program to swap two nos using pointers

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *f,*s;
    f = &a;
    s = &b;
    *f = *f + *s;
    *s = *f - *s;
    *f = *f - *s;
    printf("%d %d",a,b);
    return 0;
}