/*
#include <stdio.h>

int main(){

    int n=1;
    while(n <= 10) {
        printf("%d\n",n);
        n++ ;
    }
    return 0;
}
    

#include <stdio.h>
int main(){
    int n=2;
    while(n<=10){
        printf("%d\n",n);
    }
    n++ ;
    return 0 ; 
}
    

#include <stdio.h>
int main(){
    int n=1;
    while(n<=100){
        printf("%d\n",n);
        n++;
    
    if (n>10){
        break;
    }
    }
    return 0 ;
}
    


#include <stdio.h>
int main(){
    int n=0;
    while(n<10){
        n=n+1;
        if(n%2==0){
            continue;
        
        }
        printf("%d\n",n);

    }
    return 0;
}
   

#include <stdio.h>
int main(){
    int n=5;
    int i=1;
    while(i<=10){
        printf("%d * %d=%d\n",n,i,n*1);
        i=i+1;
    }
    return 0;
}
     

#include <stdio.h>
int main(){
    int n=5;
    int i;
    for (i=1;i<=10;i=i+1){
        printf("%d * %d %d\n",n,i,n*1);
    }
    return 0;
}



#include <stdio.h>
int main(){
    int n=5;
    int i=1;

    for (; ; ){
        if (i>10){
            break;

        }
        printf("%d * %d=%d\n",n,i,n*1);
        i=i+1;
    }
    return 0;
}
*/

#include <stdio.h>
int main(){
    int m,n=5;
    int i;

    m=0;
    for (i=1;i<=10;i=i+1){
        m=m+n;
        printf("%d * %d=%d\n",n,i,m);

    }
    return 0;
    
}