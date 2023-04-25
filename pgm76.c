// Read and display information of a student using a nested structure

#include <stdio.h>

int main()
{
    struct DOB
    {
        int day;
        int month;
        int year;
    };
    struct student
    {
        int roll_no;
        char name[100];
        float fees;
        struct DOB date;
    };
    struct student stud1;
    printf("\n Enter the roll number: ");
    scanf("%d", &stud1.roll_no);
    printf("\n Enter the name: ");
    scanf("%s", stud1.name);
    printf("\nEnter the fees: ");
    scanf("%f", &stud1.fees);
    printf("\nEnter DOB: ");
    scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
    printf("\n**********STUDENT'S DETAILS**********");
    printf("\nRoll No. = %d", stud1.roll_no);
    printf("\nName = %s", stud1.name);
    printf("\nFees = %f", stud1.fees);
    printf("DOB = %d - %d - %d", stud1.date.day, stud1.date.month, stud1.date.year);
    return 0;
}
