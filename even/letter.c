/*
#include <stdio.h>
int main(){
    char ch ='w';

        if(ch >= 'a'&& ch <= 'z'){
            printf("%c is lower case\n",ch);
        }
        if (ch >='A' && ch <= 'Z'){
            printf("%c is upper case\n",ch);
        }
        return 0;
}
        */

#include <stdio.h>
int main(){
    char ch = 'k';
    if (ch>= 'a' && ch<='z' ){
        printf("%c is lower case\n",ch);
    }
    else if(ch >= 'A' && ch <='z'){
        printf("%c is upper case\n",ch);
    }
    return 0;
}
