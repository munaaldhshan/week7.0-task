#include <stdio.h>

int main()
{
    int A[3][3];
    int B[3][3];

    int row, col, isEqual;

    printf("enter elements in matrix A of size 3x3: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("\nenter elements in matrix B of size 3x3: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    isEqual = 1;

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(A[row][col] != B[row][col])
            {
                isEqual = 0;
                break;
            }
        }
    }

    if(isEqual == 1)
    {
        printf("\nequal");
    }
    else
    {
        printf("\n not equal");
    }

    return 0;
}
