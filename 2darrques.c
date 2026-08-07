#include<stdio.h>
int main(){

    int arr[3][2], i ,j ,sum=0;

    printf("elements of matrix are: ");

    for(i=0;i<3;i++){

        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++){

        for(j=0;j<2;j++){
            printf("%d\t",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
            printf("sum is%d ",sum);
}