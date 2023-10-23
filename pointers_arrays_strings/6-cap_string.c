#include "main.h"

char *cap_string(char *entry)
{
    int index, count;

    char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};

    for (index = 0; entry[index] != '\0'; index++)
    {
        // Check if the current character is a lowercase letter
        if (entry[index] >= 'a' && entry[index] <= 'z')
        {
            // Convert lowercase letter to uppercase
            entry[index] = entry[index] - 'a' + 'A';
        }
        // Check if the character is one of the specified delimiter characters
        for (count = 0; chars[count] != '\0'; count++)
        {
            if (chars[count] == entry[index])
            {
                break; // No need to continue checking if it's a delimiter
            }
        }
    }
    return entry;
}

