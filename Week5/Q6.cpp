#include<stdio.h>
#include<stdlib.h>
                                                // sort an array using pointers
void sort(int *arr, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(*(arr+j) > *(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}
int main(){
    int *arr;
    int n;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }
    sort(arr,n);
    for(int i=0; i<n; ++i){
        printf("%d ",*(arr+i));
    }
    return 0;
}