#include<stdio.h>
#include<stdlib.h>
int main(){
    int r=0,n,num;
    printf("Enter the number to be reversed : ");
    scanf("%d",&n);
    while(n>0){
        r = r*10;
        r=r+n%10;
        n=n/10;
    }
    printf("%d",r);
    return 0;

}