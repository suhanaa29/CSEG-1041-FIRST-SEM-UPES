// Q4. Matrix Operations [8 Marks]
// Write a program to input two 3 × 3 matrices. Perform and display:
// (a) Matrix addition [2 Marks]
// (b) Matrix subtraction [2 Marks]
// (c) Matrix multiplication [4 Marks]


#include <stdio.h>

void main() {
    int a[3][3], b[3][3];   // two 3x3 matrices
    int add[3][3], sub[3][3], mul[3][3];
    int i, j, k;

    // input for first matrix
    printf("Enter elements of first 3x3 matrix (row wise):\n");
    for(i=0; i<3; i++) {   // loop for rows
        for(j=0; j<3; j++) {  // loop for columns
            scanf("%d",&a[i][j]);
        }
    }

    // input for second matrix
    printf("Now enter elements of second 3x3 matrix (row wise):\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&b[i][j]);
        }
    }

    // both add and subtract
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            add[i][j] = a[i][j] + b[i][j];   // add
            sub[i][j] = a[i][j] - b[i][j];   // subtract 
        }
    }

    // multiplication
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            mul[i][j] = 0;  
            for(k=0; k<3; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // printing results
    printf("\nResult after Addition:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");  
    }

    printf("\nResult after Subtraction:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    printf("\nResult after Multiplication:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    printf("\nDone!\n");
}
