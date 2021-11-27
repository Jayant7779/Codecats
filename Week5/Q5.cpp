#include<stdio.h>
#include<stdlib.h>

                        // Take an array of string from user and print it

int main(){
    char **a;
    int n;
    scanf("%d",&n);
    a = (char **)malloc(n * sizeof(char*));
    for(int i=0; i<n; i++){
    *(a+i) = (char *)malloc(1024 * sizeof(char));
    scanf("%s",*(a+i));
    }
    for(int i=0; i<n; i++){
    printf("%s\n",*(a+i));
    }
    return 0;
}