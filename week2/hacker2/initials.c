#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    
    for ( int i = 0, n = strlen(name); i < n; i++ )
    {
        if ( i == 0 && name[i] != ' ' )
        {
            printf("%c", toupper(name[i]));
        }
        if ( name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' ) 
        {
            printf("%c", toupper(name[i + 1])); 
            i++;
        }
       
    }
    printf("\n"); 
}