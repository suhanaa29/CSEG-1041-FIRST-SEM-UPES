// Q6. Maximum in Each Row & Column [8 Marks]
// Write a program that takes a 4 × 4 matrix and finds the maximum element in each
// row and each column. (Row max: 4 Marks, Column max: 4 Marks).


#include <stdio.h>

int main() {
    int matrix[4][4];
    int i, j, max;

    // take input from user for 4x4 matrix
    printf("Enter elements of 4x4 matrix:\n");
    for(i=0; i<4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix [i][j]);
        }
    }

    // find max element in each row
    printf("\nMaximum element in each row:\n");
    for(i=0;i<4;i++) {
        max = matrix [i][0]; // assume first element is max
        for(j=1; j<4; j++) {
            if(matrix[i] [j] > max) {
                max = matrix[i] [j];
            }
        }
        printf("Row %d: %d\n", i + 1, max);
    }

    // find max in each column
    printf("\nMaximum element in each column:\n");
    for(j=0; j<4; j++) {
        max = matrix[0] [j]; // assume first element is max
        for(i=1; i < 4; i++) {
            if(matrix[i][j] > max) {
                max = matrix [i] [j];
            }
        }
        printf("Column %d: %d\n", j + 1, max);
    }

    return 0;
}

