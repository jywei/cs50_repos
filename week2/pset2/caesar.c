#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Get the key to the cipher
int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    else
    {
        // Convert the string to an integer
        int k = atoi(key) % 26;
        // Check that it is a valid key
        if (k == 0)
        {
            printf("Usage: ./caesar k\n");
            return 1;
        }
        // Get the text to encrypt
        printf("plaintext:  ");
        string plainText = GetString();
        if (plainText != NULL)
        {
            printf("ciphertext:  ");
            // Encrypt and print
            for (int i = 0, n = strlen(plainText); i < n; i++)
            {
                int c = 0;
                // Check if text is upper case or lower case
                // If so, switch to alphabet number and encrypt
                if (isupper(plainText[i]))
                {
                    c = ((plainText[i] - 65 + k) % 26) + 65;
                    printf("%c", c);
                }
                else if (islower(plainText[i]))
                {
                    c = ((plainText[i] - 97 + k) % 26) + 97;
                    printf("%c", c);
                }
                else
                {
                    printf("%c", plainText[i]);
                }
            }
            printf("\n");
            return 0;
        }
    }
}
