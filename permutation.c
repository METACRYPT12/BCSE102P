#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/// @brief Swap value of two pointers
/// @param p1 First pointer
/// @param p2 Second Pointer
void swap(char *p1, char *p2)
{
    char tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    return;
}

/// @brief Sort pointer array
/// @param start Pointer to the start of the pointer array
/// @param end Pointer to the end of the pointer array
void sort(char *start, char *end)
{
    char *i = start;
    char *j;
    while (i < end - 1)
    {
        j = i + 1;
        while (j < end)
        {
            if (*i > *j)
                swap(i, j);
            j++;
        }
        i++;
    }
    return;
}

/// @brief Reverse a pointer array
/// @param start Pointer to the start of the pointer array
/// @param end Pointer to the end of the pointer array
void reverse(char *start, char *end)
{
    char tmp;
    while (start < end)
    {
        tmp = *start;
        *start = *(--end);
        *end = tmp;
        start = start + 1;
    }
    return;
}

/// @brief Modifies original string if permutation is possible
/// @param first pointer to the start of the pointer array
/// @param last pointer to the end of the pointer array
/// @return 1 if next permutation is possible else 0
int next_permutation(char *first, char *last)
{
    if (first == last)
        return 0;
    char *i;
    i = last;
    if (first == --i)
        return 0;
    char *i1;
    char *i2;
    while (1)
    {
        i1 = i;
        if (*--i < *i1)
        {
            i2 = last;
            while (!(*i < *--i2))
                ;
            swap(i, i2);
            reverse(i1, last);
            return 1;
        }
        if (i == first)
        {
            reverse(first, last);
            return 0;
        }
    }
}

/// @brief Generate all possible permuatations
/// @param str String to be permutated
void permute(char *str)
{
    sort(&str[0], strrchr(str, '\0'));
    char *tmp;
    tmp = (char *)malloc(sizeof(char) * (strlen(str) + 1));
    strcpy(tmp, str);
    if (next_permutation(&str[0], strrchr(str, '\0')))
        puts(tmp);
    else
    {
        printf("No possible combinations");
        return;
    }
    do
    {
        puts(str);
    } while (next_permutation(&str[0], strrchr(str, '\0')));
    return;
}

/// @brief Remove all whitespaces from the string
/// @param orig_str String to be purified
/// @return Purified String
char *purify(char *orig_str)
{
    int i, len = 0, j;
    static char str1[20];
    strcpy(str1, orig_str);
    len = strlen(str1) / sizeof(str1[0]);

    for (i = 0; i < len; i++)
    {
        if (str1[i] == ' ')
        {
            for (j = i; j < len; j++)
            {
                str1[j] = str1[j + 1];
            }
            len--;
        }
    }
    return str1;
}

int main()
{
    char *str;
    fflush(stdin);
    fgets(str, 20, stdin);
    char *l = strrchr(str, '\n');
    *l = '\0';
    str = purify(str);
    permute(str);
    return 0;
}