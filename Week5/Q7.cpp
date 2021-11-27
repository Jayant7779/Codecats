#include<stdio.h>
#include<stdlib.h>
#include<string.h>
                                                // Reverse the string
void reverse(char *str,int len){
    int j=0;
    for(int i=0; i<=len/2; i++){
        char c = *(str+i);
        *(str+i) = *(str+len-i);
        *(str+len-i) = c;
    }
}
int main(){
    char *a;
    a = (char *)malloc(1024 * sizeof(char));
  
    scanf("%s",a);
    int len = strlen(a)-1;
    
    reverse(a,len);
    printf("%s",a);
    return 0;
}