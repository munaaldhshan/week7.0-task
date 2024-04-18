#include <stdio.h>
#define maxsize 1000

int main()
{
    int arr[maxsize], size, i;

    printf("enter size of the array (1-1000): ");
    scanf("%d", &size);

    printf("enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1 =arr[0];
    int max2=arr[0];

    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("first largest = %d\n", max1);
    printf("second largest = %d", max2);

    return 0;
}
