#include <stdio.h>
#include <string.h>

char *reverse(char *s)
{
    static int time = 0;
    static int len = 0;
    int tmp;

    if (time == 0)
    {
        len = strlen(s);
    }
    if (time == len / 2)
    {
        return s;
    }

    tmp = *(s + time);
    *(s + time) = *(s + len - 1 - time);
    *(s + len - 1 - time) = tmp;

    time += 1;
    return reverse(s);

}

int main()
{
    char str[10] = "hello";
    reverse(str);
    printf("%s\n",  reverse(str));
    return 0;
}
