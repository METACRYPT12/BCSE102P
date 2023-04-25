// usage of struct

#include <stdio.h>

int main()
{
    struct student
    {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];
    };
    struct student stud1;
    printf("\nEnter the roll Number: ");
    scanf("%d", &stud1.roll_no);
    printf("\nEnter the name: ");
    scanf("%s", stud1.name);
    printf("\nEnter the fees: ");
    scanf("%f", &stud1.fees);
    printf("\nEnter DOB: ");
    scanf("%s", stud1.DOB);
    printf("\n**********STUDENT'S DETAILS**********");
    printf("\nRoll No. = %d", stud1.roll_no);
    printf("\nName = %s", stud1.name);
    printf("\nFees = %f", stud1.fees);
    printf("\nDOB = %s", stud1.DOB);
    return 0;
}