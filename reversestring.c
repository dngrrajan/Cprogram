#include<stdio.h>
#include<string.h>
int main(){
    char str[500],str1[500];
    int j,len,i;
    printf("Enter the String:");
    scanf("%s",&str);
    len=strlen(str);
   for(i=len-1;i>=0;i--){
   printf("%c",str[i]);
   }
   return 0;
}