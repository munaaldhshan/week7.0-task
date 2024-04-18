#include <stdio.h>
#define maxsize 100

int main()
{
    int source[maxsize], dest[maxsize];
    int i, size;

    printf("enter the size of the array : ");
    scanf("%d", &size);

    printf("enter elements of source array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }

    for(i=0; i<size; i++)
    {
        dest[i] = source[i];
    }

    printf("\nelements of source array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", source[i]);
    }

    printf("\nelements of dest array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", dest[i]);
    }
    return 0;
}
