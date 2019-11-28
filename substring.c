#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100],sch[50];
    int i,j;
    printf("Enter the Main String : ");
    scanf("%s",&str);
    printf("Enter the Search String : ");
    scanf("%s",&sch);
if(strstr(str,sch)==NULL){
    printf("The Substing Is NOT Present");
}
else{
    printf("The Substing Is Present"); 
}
return 0;
}
