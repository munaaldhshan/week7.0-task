#include <stdio.h>
#define maxsize 100

int main()
{
    int arr[maxsize];
    int size, i;

    printf("enter size of the array: ");
    scanf("%d", &size);

    printf("enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\narray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
