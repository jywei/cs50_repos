#include <stdio.h>
#include <string.h>

void swap(char *c1, char *c2)
{
    *c1 ^= *c2 ^= *c1 ^= *c2;
}

char *reverse_iterative(char *s)
{
    int len = strlen(s);
    int i;
    for ( i = 0; i < len / 2; i++)
    {
        swap(s + i, s + (len - 1 - i));
    }
    return s;
}

char *reverse_recursive(char *s)
{
    static int time = 0;
    static int len = 0;

    if (time == 0)
    {
        len = strlen(s);
    }
    if (time == len / 2)
    {
        return s;
    }

    swap(s + time, s + len - 1 - time);
    time += 1;
    return reverse_recursive(s);

}


int main(){
    char str[10] = "hello";
    reverse_recursive(str);
    printf("%s\n",  reverse_recursive(str));
    return 0;
}
