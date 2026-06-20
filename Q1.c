#include <stdio.h>
int main()
{
    char name[100];
    int len = len(name);
    char lower[100] = lowerto(name);
    char upper = upperto(name);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; i < len; i++)
        {
            if (name[i] == lower[j])
            {
                name[i] = upperto(name);
            }
            else
                (
                    name[i] == lowerto(name);)
        }
        printf("Upper Case : ", upper);
        printf("Lower Case : ", lower);
        }}