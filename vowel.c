/*
#include <stdio.h>
int main (){
    char ch = 'r';
    if("ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' "){
        printf("%c is vowel\n",ch);

    }
    else{
        printf("%c is consotant\n",ch);
    }
    return 0;
}
    */

    #include <stdio.h>
    int main(){
        char ch;
        printf("Character de: ");
        scanf(" %c", &ch);
    
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("%c vowel\n", ch);
        }
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            printf("%c consonant\n", ch);
        }
        else{
            printf("%c alphabet na\n", ch);
        }
    
        return 0;
    }
    