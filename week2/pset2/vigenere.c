#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    int m = strlen(argv[1]);
    // check if alphabetical
    for (int i = 0; i < m; i++)
    {
        if (isalpha(argv[1][i]) == false)
        {
            printf("Usage: ./vigenere k\n");
            return 1;
        }
    }

    // get the message from the user
    printf("plaintext: ");
    string text = GetString();
    printf("ciphertext: ");

    for (int i = 0, j = 0, result = 0, n = strlen(text); i < n; i++)
    {
        char letter = text[i];
        // input plaintext from the first letter
        char key = argv[1][(j) % m];
        // as for the characters in key, treat A and a as 0, B and b as 1, … , and Z and z as 25
        if (isupper(key))
        {
           key -= 65;
        }
        else if (islower(key))
        {
           key -= 97;
        }

        if (isupper(letter))
        {
            letter -= 65;
            result = (letter + key) % 26 + 65;
            j++;
        }
        else if (islower(letter))
        {
            letter -= 97;
            result = (letter + key) % 26 + 97;
            j++;
        }
        // if the character in text is not a letter, output this character unchanged
        else
        {
           result = letter;
        }
        printf("%c", result);
    }
    printf("\n");
}
