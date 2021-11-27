#include<bits/stdc++.h>

// Largest no using dynamic memory allocation
int main(){
    int *arr;
    int n;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; ++i){
        scanf("%d",(arr+i));
    }
    
    int *largest = arr;
    for(int i=1; i<n; ++i){
        *largest = *(arr+i)>*largest?*(arr+i):*largest;
    }
    printf("Largest : %d",*largest);
    return 0;
}