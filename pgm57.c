// Demonstration of in-built String functions

#include <stdio.h>
#include <string.h>
int main()
{
    char temp[20];
    printf("Enter a String: ");
    gets(temp);
    printf("Entered String is: ");
    puts(temp);
    char src[20] = "Strings in";
    char dest[20] = "C Programming";
    printf("\nContents of src array: %s", src);
    printf("\nContents of dest array: %s", dest);
    strcat(dest, src);
    printf("\ndest array after strcat(dest, src) operation: %s", dest);
    printf("\n\nContents of dest array: %s", dest);
    printf("\nstrlwr(dest): %s", strlwr(dest));
    printf("\n\nContents of src array: %s", src);
    printf("\nLength of src string: %lld", strlen(src));
    printf("\n\nContents of src array: %s", src);
    printf("\nContents of dest array: %s", dest);
    printf("\nstrcmp(dest, src): %d", strcmp(dest, src));
    printf("\n\nContents of src array: %s", src);
    printf("\nContents of dest array: %s", dest);
    strcpy(dest, src);
    printf("\ndest array after strcpy(dest, src) operation: %s", dest);
    printf("\n\nContents of dest array: %s", dest);
    printf("\nstrrev(dest): %s", strrev(dest));
    return 0;
}
