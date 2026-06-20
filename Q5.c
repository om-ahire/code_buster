#include <stdio.h>
int main()
{

    int M;
    int Y;
    int R;
    int G;

    printf("Enter the Pill M : ");
    scanf("%d", M);
    printf("Enter the Pill Y : ");
    scanf("%d", Y);
    printf("Enter the Value of R :");
    scanf("%d", R);
    printf("Enter the Value of G : ");
    scanf("d", G);
    int M_health = M;
    int y_health = Y;
    int red = y_health + R;
    int green = y_health * G;
    if (red > M_health)
    {
        printf("1");
    }
    if (green > M_health)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}