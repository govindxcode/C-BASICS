#include<stdio.h>
int main(){

    int arr[2][3], i ,j ;
    
    printf("enter the elements of matrix: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("transpose matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }

       return 0;   
}







//                   TRANSPOSE NIKALNE KE BAAD DUSRE  MATRIX MEH STORE KARAKE WO MATRIX PRINT KRNE KE LIYE 





#include<stdio.h>
int main(){

    int arr[2][3], trans[3][2], i ,j ;
    
    printf("enter the elements of matrix: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            trans[j][i]=arr[i][j];
        }
    }

    printf("transpose matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }

       return 0;   
}

