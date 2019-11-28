#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    int l=0,h;
    printf("Enter the String to be Cheked : ");
    scanf("%s",&str);
    h=strlen(str)-1;
    while(h>l){
        if(str[l++]!=str[h--]){
            printf("Its Not A Palindrome");
          return 0;
        }
       
        }
       printf("Its a Palindrome");  
       return 0;
    }

