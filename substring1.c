#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100],sea[20];
    int i,j,s1,s2,flag;
    printf("Enter the Main String : ");
    scanf("%s",&str);
    printf("Enter the Search String : ");
    scanf("%s",&sea);
    s1=strlen(str);
    s2=strlen(sea);
    for(i=0;i<=s1-s2;i++){
        for(j=i;j<s2+i;j++){
            flag=1;
            if(str[j]!=sea[j-i]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        printf("Present");
    }
    else{
       printf("Not Present");  
    }

return 0;
}