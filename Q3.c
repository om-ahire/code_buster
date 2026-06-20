#include <stdio.h>
int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            num[i] = num[i] + num[i + 1];
        }
        if (i == 4)
        {
            num[4] = num[4] - num[4 - 1];
        }
        else
        {

            num[i] = num[i - 1] + num[i + 1];
        }
        printf("Sum= %d", num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("even index : ", num[i]);
        }
        if (num[i] % 2 = !0)
        {
            printf("Odd Index : ", num[i]);
        }
    }
}