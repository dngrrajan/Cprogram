#include<stdio.h>
int recursive(int number){

if(number>0){
return number*recursive(number-1);
}
else{
return 1;
}
}

int main(){
    int n;
    printf("Enter the given number : ");
    scanf("%d",&n);
   printf("The factorial of the number %d is: %d\n", n, recursive(n));
    return 0;
}