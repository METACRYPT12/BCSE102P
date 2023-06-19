#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char brand[50][50] = {"Samsung", "Sandisk", "Toshiba", "Kingston", "Sony", "\0"};
    int price[50] = {200, 100, 300, 400, 500};
    int stock[50] = {20, 10, 5, 15, 2};
    int i, n = 0, cost = 0, quantity, reorder;
    char name[50];
start:
    printf("Enter the name of product : \n");
    scanf("%s", name);

    while (n == 0)
    {
        for (i = 0; i < 5; i++)
        {
            if (strcmp(name, brand[i]) == 0)
            {
                printf("Enter number of products : \n");
                scanf("%d", &quantity);
                if (quantity <= stock[i])
                {
                    cost += price[i] * quantity;
                    stock[i] = stock[i] - quantity;
                    printf("Want to add something?\nPress 0\nIf not then press 1\n");
                    scanf("%d", &reorder);
                    if (reorder == 0)
                    {
                        goto start;
                    }
                    else if (reorder == 1)
                    {
                        n = 1;
                        goto end;
                    }
                }
                else
                {
                    printf("Insufficent Quantity!!\n");
                    goto start;
                }
            }
        }
    }
end:
    printf("Total cost of the order is : %d", cost);
    return 0;
}