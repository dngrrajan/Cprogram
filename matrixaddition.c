#include<stdio.h>
int main(){
    int rw,cl,c,d,first[10][10],second[10][10],sum[10][10];
    printf("Enter the rows and columns of the matrix:\n");
    scanf("%d%d",&rw,&cl);
    printf("Enter the elements of First Matrix :\n");
    for(c=0;c<rw;c++)
    for(d=0;d<cl;d++)
    scanf("%d",&first[c][d]);
    printf("Enter the elements of Second Matrix :\n ");
    for(c=0;c<rw;c++)
    for(d=0;d<cl;d++)
    scanf("%d",&second[c][d]);
    printf("The Sum of the Two Matrix is :-\n");
    for(c=0;c<rw;c++){
        for(d=0;d<cl;d++){
            sum[c][d]=first[c][d] - second[c][d];
            printf("%d\t",sum[c][d]);
        }
       printf("\n") ;
    }
return 0;
}