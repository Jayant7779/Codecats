#include<bits/stdc++.h>

            // Call by reference
void swap(int *f, int *s){
    int temp = *f;
    *f = *s;
    *s = temp;
    
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}