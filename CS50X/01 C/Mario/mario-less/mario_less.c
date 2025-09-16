#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    // We getting Height from user
    do
    {
        h = get_int("Height:");
    }
    // Height must be betwin 1 & 8
    while (h < 1 || h > 8);
    // Making our piramid with for loop
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h - (i + 1); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
