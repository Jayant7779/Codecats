#include<bits/stdc++.h>


// Program to access elements of array using pointer

int main(){
    int *arr;
    int n;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; ++i){
        scanf("%d",arr+i);
    }
    // Printing the whole array using pointers 
    for(int i=0; i<n; ++i){
        printf("%d ",*(arr+i));
    }
    // printing the specific index(0 based) let's say 5
    printf("\n %d",*(arr+5));
    return 0;
}