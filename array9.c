#include <stdio.h>
#include <stdlib.h>
#define maxsize 100
int main()
{
    int arr[maxsize];
    int size , i , x , pos ;

    printf("enter size of the array : ");
    scanf("%d", &size);

    printf("enter elements of array : ");
    for (i=0 ; i<size ; i++)
    {
       scanf("%d",&arr[i]);
    }

    printf("enter element to insert : ");
    scanf("%d",&x);

    printf("enter the new position : ");
    scanf("%d",&pos);

    if(pos > size+1 || pos <= 0)
    {
        printf("enter position between 1 to %d", size);
    }

    else
    {
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos-1] = x;
        size++;

        printf("array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}
