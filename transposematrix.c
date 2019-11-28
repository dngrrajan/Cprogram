#include<stdio.h>
#include<stdlib.h>
int main(){
    int rw,cl,c,d,mat[10][10],transpose[10][10];
    printf("Enter the rows and columns : \n ");
    scanf("%d%d",&rw,&cl);
    printf("Enter the matrix to be Transposed \n");
    for(c=0;c<rw;c++)
    for(d=0;d<cl;d++)
    scanf("%d",&mat[c][d]);
    for (c = 0; c < rw; c++)
    for (d = 0; d < cl; d++)
    transpose[d][c]=mat[c][d];

    for(c=0;c<cl;c++){
        for(d=0;d<rw;d++){
            printf("%d\t",transpose[c][d]);
            
        }
      printf("\n");  
    }
    return 0;
}