#include <stdio.h>
int main()
{

    int n, i;
    printf("enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest=arr[i];
        }
    }
    printf("the largest element is: %d",largest);

    return 0;
}