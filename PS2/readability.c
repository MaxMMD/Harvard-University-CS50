#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int letter_counter = 0;
    int word_counter = 1;
    int sentence_counter = 0;

    for (int i = 0; i < strlen(text); i++)
    {
       if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
       {
           letter_counter++;
       }
       else if (text[i] == ' ')
       {
           word_counter++;
       }
       else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
       {
           sentence_counter++;
       }
    }

    float grade = 0.0588 * (100 * (float) letter_counter / (float) word_counter) - 0.296 * (100 * (float) sentence_counter / (float) word_counter) - 15.8;
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

}