#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s[1000];
    int i,n,c=0;
    printf("Enter the String");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            c++;
        }

    }
    if(c==i){
        printf("Its a Palindrome");
    }
    else{
       printf("Its Not a Palindrome");  
    }
    return 0;
}