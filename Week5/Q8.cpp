#include<bits/stdc++.h>
                                                    //Average using pointers
void average(int *arr, int len){
    double total = 0;
    for(int i=0; i<len; ++i){
        total += *(arr+i);
    }
    printf("%lf",total/len);

}
int main(){
    int *arr;
    int n;
    scanf("%d",&n);

    arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; ++i){
        scanf("%d",arr+i);
    }
    average(arr,n);
    return 0;
}