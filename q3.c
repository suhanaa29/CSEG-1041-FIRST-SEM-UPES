// Q3. Frequency Counter using switch-case [5 Marks]
// Write a program to input 10 integers (range 0–9). Store them in an array. Then, using a
// switch-case, print the frequency of each digit.


#include <stdio.h>

int main() {
    int num[10];
    // counters for each digit (0-9)
    int c0=0, c1=0, c2=0, c3=0, c4=0;
    int c5=0, c6=0, c7=0, c8=0, c9=0;
    
    printf("Enter 10 numbers between 0 to 9:\n");
    for(int i=0;i<10;i++) {
        scanf("%d",&num[i]);
    }
    
    // checking each number and increasing count
    for(int i=0;i<10;i++) {
        switch(num[i]) {
            case 0:
            c0++; 
            break;

            case 1:
              c1++;
                 break;
            case 2:
              c2++; 
                 break;
            case 3:
              c3++;
              break;
            case 4:
              c4++;
              break;
            case 5:
              c5++;
              break;
            case 6:
              c6++;
              break;
            case 7:
              c7++;
              break;
            case 8:
              c8++; 
              break;
            case 9:
              c9++;
              break;
            default: printf("Wrong input: %d\n",num[i]);
        }
    }

    // printing all results
    printf("Frequency of digits:\n");
    printf("Digit 0: %d times\n", c0);
    printf("Digit 1: %d times\n", c1);
    printf("Digit 2: %d times\n", c2);
    printf("Digit 3: %d times\n", c3);
    printf("Digit 4: %d times\n", c4);
    printf("Digit 5: %d times\n", c5);
    printf("Digit 6: %d times\n", c6);
    printf("Digit 7: %d times\n", c7);
    printf("Digit 8: %d times\n", c8);
    printf("Digit 9: %d times\n", c9);

    return 0;
}