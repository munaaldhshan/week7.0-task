#include <stdio.h>
#define size 100

int sum(int arr[], int start, int end );


int main()
{
    int arr[size];
    int N, i, s;

    printf("enter size of the array: ");
    scanf("%d", &N);

    printf("enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    s = sum(arr, 0, N);
    printf("sum of array elements: %d", s);

    return 0;
}

int sum(int arr[], int start, int end )
{
    if(start >= end )
        return 0;

    return (arr[start] + sum(arr, start + 1, end));
}
