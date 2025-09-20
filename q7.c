// Q7. Student Marks Analysis (Mini Project)
// Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
// 2D array where each row represents a student and each column represents a subject.
// Perform the following:
// (a) Calculate the total and average marks of each student. [4 Marks]
// (b) Find the highest scorer (student with maximum total marks). [3 Marks]
// (c) Find the subject in which the class performed worst (lowest average marks). [4 Marks]
// (d) Use sizeof() operator to display the total memory consumed by the array. [4 Marks]


#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;
    int sum[5];
    float avg[5];

    // take marks by input
    for(i=0;i<5;i++){
        printf("\nEnter marks of student %d:\n", i + 1);
        printf("Physics: ");
        scanf("%d",&marks[i][0]);
        printf("Chemistry: ");
        scanf("%d",&marks[i][1]);
        printf("Maths: ");
        scanf("%d",&marks[i][2]);
    }

    // total and average
    for(i = 0; i < 5; i++){
        sum[i]=0;
        for(j=0;j<3;j++){
            sum[i]=sum[i]+marks[i][j];
        }
        avg[i]=sum[i]/3; 
    }

    printf("\nStudent Performance:\n");
    for(i=0;i<5;i++){
        printf("Student %d total = %d average = %f\n",i+1,sum[i],avg[i]);
    }

    // topper 
    int topper=0;
    if(sum[1]>sum[topper]) topper=1;
    if(sum[2]>sum[topper]) topper=2;
    if(sum[3]>sum[topper]) topper=3;
    if(sum[4]>sum[topper]) topper=4;

    printf("\nTopper is Student %d with total %d\n",topper+1,sum[topper]);

    // worst subject
    int p=0,c=0,m=0;
    for(i=0;i<5;i++){
        p=p+marks[i][0];
        c=c+marks[i][1];
        m=m+marks[i][2];
    }

    float pa=p/5, ca=c/5, ma=m/5;

    if(pa<ca && pa<ma)
        printf("Worst subject is Physics with average %f\n",pa);
    else if(ca<ma)
        printf("Worst subject is Chemistry with average %f\n",ca);
    else
        printf("Worst subject is Maths with average %f\n",ma);

    return 0;
}

