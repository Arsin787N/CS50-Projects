#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");
    // Count the number of letters, words, and sentences in the text
    // Count the number of letters in the text
    float l = 0;
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]) != 0)
        {
            l++;
        }
    }
    // Count the number of word in the text
    float w = 1;
    for (int j = 0; j < n; j++)
    {
        if (text[j] == 32)
        {
            w++;
        }
    }
    // Count the number of sentences in the text
    float s = 0;
    for (int k = 0; k < n; k++)
    {
        if (text[k] == 46 || text[k] == 33 || text[k] == 63)
        {
            s++;
        }
    }
    // count L & S
    float L = 100 * (l / w);
    float S = 100 * (s / w);
    // Compute the Coleman-Liau index
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    // Print the grade level
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
