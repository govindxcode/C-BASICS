#include <stdio.h>
int main()
{

    int n, i, sum = 0;

    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("the sum of even elements is :%d", sum);
    
    return 0;
}
