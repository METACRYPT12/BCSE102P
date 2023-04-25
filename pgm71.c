// movie_name rating

// 1. Add
// 2. Display
// 3. Remove

#define MAX 100

#include <stdio.h>
#include <string.h>

struct movie
{
    char movie_name[MAX];
    float rating;
};

struct movie arr[50];
int position = 0;

void add(char movie_name[], float rating)
{
    strcpy(arr[position].movie_name, movie_name);
    arr[position].rating = rating;
    position++;
}

void deletep(int p)
{
    int i = 0;
    for (i = p - 1; i < position; i++)
        arr[i] = arr[i + 1];
    position--;
}

void display()
{
    int i = 0;
    printf("Sl.No.\tMovie Name\tRating\n");
    for (i = 0; i < position; i++)
    {
        printf("%d\t%s\t\t%.1f\n", (i + 1), arr[i].movie_name, arr[i].rating);
    }
    printf("\n");
}

int main()
{
    int choice = 0;
    char tmp[MAX];
    float r = 0.0;
    int p = 0;
    int flag = 1;
    printf("*****************************\n");
    printf("*******Movie Directory*******\n");
    printf("*****************************\n\n");
    while (flag)
    {
        printf("*****************************\n");
        printf("1. Add\n2. Display\n3. Remove\n4. Exit\n");
        printf("*****************************\n");
        printf("Enter option: ");
        scanf("%d", &choice);
        printf("*****************************\n\n");
        switch (choice)
        {
        case 1:
            printf("Enter Movie Name: ");
            scanf(" %s", tmp);
            printf("Enter Rating: ");
            scanf("%f", &r);
            printf("\n");
            add(tmp, r);
            break;

        case 2:
            display();
            break;

        case 3:
            printf("Enter Position of Deletion: ");
            scanf("%d", &p);
            printf("\n");
            deletep(p);
            break;

        case 4:
            printf("Exiting...");
            flag = 0;
            break;

        default:
            printf("Invalid Input!!!\n");
            printf("\n");
            break;
        }
    }
    return 0;
}
