#include <stdio.h>

int main()
{

    int i, j;

   /* printf("enter row size: ");
    scanf("%d", &n);

    printf("enter column size: ");
    scanf("%d", &m);*/

    int arr[3][3];

    printf("the matrix elements are: ");

    for (i = 0; i < 3; i++)                   // replace 3 with n
    {

        for (j = 0; j < 3; j++)              // replace 3 with 3
        {

            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)                   // replace 3 with n
    {

        for (j = 0; j < 3; j++)               // replace 3 with m
        {

            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
