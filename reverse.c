#include<stdio.h>
#include<string.h>
int main(){
    char str[1000],temp;
    int i,j;
    printf("Enter the String:");
    gets(str);

    i=0;
    j=strlen(str)-1;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("\nReverse string is :%s", str);
    return 0;
}