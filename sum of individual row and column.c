#include<stdio.h>
int main(){

    int arr[3][3], i ,j ,sumrow, sumcolumn; 
    
    printf("enter the elements of matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++){
        sumrow=sumcolumn=0;       // har row & column ka sum print ke liye sum ko 0 initialise krnaa
        for(j=0;j<3;j++){
            sumrow=sumrow+arr[i][j];
            sumcolumn=sumcolumn+arr[j][i];
        }
        printf("sumrow %d, sumcolumn%d ",sumrow,sumcolumn);
    }


    return 0;
}    