// Q5. Transpose of a Matrix [4 Marks]
// Write a program to find the transpose of a given 3 × 3 matrix.


#include <stdio.h>

int main()
{
    // 3x3 matrix and loop variable
    int arr[3] [3], i, j;
    printf("Enter the elements for 3x3 matrix S:\n");

    for( i=0; i<3; i++)
{
    for( j=0; j<3; j++)
    {
        scanf("%d" , &arr[i] [j]);
    }
}

// take elements from user
printf("\n elements of matrix S are:\n");
for( i=0; i<3; i++)
{
    for( j=0; j<3; j++)
    {
        printf("%3d" , arr[i] [j]);
    }
    printf("\n");
}

// show transposed matrix
printf("\n after transpose the elements in matrix S are:\n");
for(i=0; i<3; i++)
{
    for( j=0; j<3; j++)
    {
        printf("%3d" , arr[j] [i]);
    }
    printf("\n");
}

return 0;

}