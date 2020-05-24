#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int spaces;
    int hashes;

    do
    {
        height = get_int("Height: ");
    }
    while (!(height > 0 && height <= 8));

    for (int i = 0; i < height; i++)
    {
        for (spaces = (height - i); spaces >= 2; spaces--)
        {
            printf(" ");
        }

        for (hashes = 0; hashes < (i + 1); hashes++) 
        {
            printf("#");
        }
        printf("\n");
    }   
}

