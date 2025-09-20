// Q2. Element Search with Operators [4 Marks]
// Write a program to input n integers in an array. Ask the user for a number and check if
// it exists in the array using the ternary operator. Print "Found" or "Not Found".

#include <stdio.h>

int main() {
    int n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // arr size of n
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    // searching for key in arr
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    // Using ternary operator to print the result
    printf("%s\n", found ? "Found" : "Not Found");

    return 0;
}
