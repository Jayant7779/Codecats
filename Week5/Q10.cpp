#include<bits/stdc++.h>
                                                    //Vowel or consonant
char isVowel(char *c){
    if(*c > 90)
    *c -= 32;
    switch(*c){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                return 'V';
    }
    return 'C';
}

int main(){
    char c;
    scanf("%c",&c);
    char *ptr = &c;
    printf("%c",isVowel(ptr));
    return 0;
}