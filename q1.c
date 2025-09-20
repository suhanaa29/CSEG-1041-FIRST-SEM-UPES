// Q1. Basic Practice [6 Marks]
// Write a program to input n integers into an array and perform the following using loops:
// (a) Find the largest and smallest number. [2 Marks]
// (b) Calculate the average of all numbers. [2 Marks]
// (c) Count how many numbers are even and how many are odd. [2 Marks]

#include <stdio.h>

int main() {
    int n; 
    printf("How many numbers you want to enter? ");
    scanf("%d", &n);

    int numbers[n]; // array to store numbers
    int i;
    int b, s; // b= biggest , s= smallest
    int total = 0;
    int even = 0, odd = 0; // counters for even and odd

    // take input from user
    printf("Enter %d numbers:\n", n);
    for(i = 0; i<n;i++) {
        scanf("%d", &numbers[i]);
    }

    // assume first number is biggest and smallest
    b = numbers[0];
    s = numbers[0];

    // calculate biggest, smallest, total, even/odd
    for(i = 0; i < n; i++) {
        if(numbers[i] > b) {
            b = numbers[i];
        }
        if(numbers[i]<s) {
            s = numbers[i]; 
        }

        total = total + numbers[i];

        if(numbers[i] % 2==0) {
            even = even + 1; 
        } else {
            odd = odd+1; 
        }
    }

    float average = (float)total / n; // calculating average

    // all results
    printf("Biggest number: %d\n", b);
    printf("Smallest number: %d\n", s);
    printf("Average: %.2f\n", average);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
