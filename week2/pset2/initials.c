#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string name = GetString();

  for (int i = 0; i < strlen(name); i++)
  {
    if (i == 0 && name[i] != ' ' && name[i + 1] != '\0')
    {
      printf("%c", toupper(name[i]));
      i++;
    }
    else if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
    {
      printf("%c", toupper(name[i + 1]));
      i++;
    }
  }
  printf("\n");
  return 0;
}
