/*
#include <stdio.h>

int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    //scanf("%d",&b);
    sum=a+b;
    printf("sum is : %d\n",sum);
    return 0;
}


#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the first letter of your name:");
    scanf("%c",&ch);
    printf("Enter the first letter of your name is :%c\n",ch);
    return 0;
}
    */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the first letter of your name:");
    ch=getchar();
    printf("Enter the first letter of your name is :%c\n",ch);
    return 0;
}