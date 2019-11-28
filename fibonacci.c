#include<stdio.h>
int main(){
    int a=0,b=1,c,i,number;
    printf("Enter the number to generate fibonacci series : ");
    scanf("%d",&number);
    printf("\n%d\n%d\n",a,b);  
    for(i=2;i<=number;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}