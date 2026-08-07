#include<stdio.h>
#define N 50
int main(){

    int i , j ,k, a[N][N],b[N][N],c[N][N], sum,m,n,p,q;

    printf("enter no of rows and column of first matrix ");
    scanf("%d%d",&m,&n);

    for (i=0;i<m;i++){
        
        for (j=0;j<n;j++){

            scanf("%d",&a[i][j]);
        }
    }

    printf("enter no of rows and column of second matrix ");
    scanf("%d%d",&p,&q);

    for (i=0;i<p;i++){
        
        for (j=0;j<q;j++){

            scanf("%d",&b[i][j]);
        }
    }

    printf("element of first matrix is: ");
    for (i=0;i<m;i++){
        
        for (j=0;j<n;j++){

            printf("%d\t",a[i][j]);
        }
         printf("\n");
    }


    printf("element of second matrix is: ");
    for (i=0;i<p;i++){
        
        for (j=0;j<q;j++){

            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }


    if(n!=p){
        printf("cannot multiply");
    }
        else{

            for (i=0;i<m;i++){        // Row of A
        
        for (j=0;j<q;j++){                 // Column of B
  
             sum=0;                   // isse baar baar sum 0 ho jayega after matrix element likhne ke baad

            for(k=0;k<n;k++){           // Traverse row & column

           sum =sum+ a[i][k]*b[k][j];
           
            }
            c[i][j]=sum;
        }
    }

}

    printf("the multiplied matrix is: ");
    for (i=0;i<m;i++){
        
        for (j=0;j<q;j++){

            printf("%d\t",c[i][j]);

            
        }
          printf("\n");
    }
}        
    
        