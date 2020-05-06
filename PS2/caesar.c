#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int k;
    string plain_text;

    if (argc != 2)
    {
        printf("Wrong # of arguments given. You should only give a single digit key\n");
        return 1;
    }

    k = atoi(argv[1]);

    if (k < 0)
    {
        printf("Your single digit key cannot be negative\n");
        return 1;
    }
    else
    {

        plain_text = get_string("Message to be encrypted Caesar style: ");

        printf("Your secret message can be shared with your spy: ");

        for (int i = 0, n = strlen(plain_text); i < n; i++)
        {


            if islower(plain_text[i])
            {
                printf("%c", (((plain_text[i] + k) - 97) % 26) + 97);
            }

            else if isupper(plain_text[i])
            {
                printf("%c", (((plain_text[i] + k) - 65) % 26) + 65);
            }

            else
            {
                printf("%c", plain_text[i]);
            }
        }

        printf("\n");

        return 0;
    }
}