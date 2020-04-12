#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (!(h > 0 && h <= 8));

    for (int i = 0; i < h; i++)
        {
            for (int spaces = (h - i); spaces >= 2; spaces--) {
                    printf(" ");
                }
    // For loop to print out hashes
            for (int hash = 0; hash <= (i + 1); hash++) {
                    printf("#");
                }
            printf("\n");
        }   
}

