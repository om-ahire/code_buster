#include <stdio.h>
int main()
{
    char string[100] = {"welcome"};
    char s1[100] = asc(string);
    char s2[100] = desc(string);
    printf("ASC: ", s1);
    printf("desc", s2);
}