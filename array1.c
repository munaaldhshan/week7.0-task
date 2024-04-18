#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size;

    printf("Enter size of array: ");
    scanf("%d", &size );

    printf("enter elements : ");

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nelements in the array : ");

    for(i=0; i<size; i++)
    {
        printf(" %d.", arr[i]);
    }

    return 0;
}
