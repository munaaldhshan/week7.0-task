#include <stdio.h>
#define maxsize 100

int main()
{
    int arr[maxsize];
    int i, j, size, count = 0;

    printf("enter size of the array : ");
    scanf("%d", &size);

    printf("enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\ntotal number of duplicate elements in array = %d", count);

    return 0;
}
