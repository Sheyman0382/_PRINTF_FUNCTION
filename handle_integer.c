#include "main.h"

void *handle_integer(void)
{
    int count, i = 0, divider = 0;
    char *str;
    
    count = count_digit(*ptr);
    for (; i < count; i++){
            if (i == 0)
                divider = 1;
            else
                divider = divider * 10;
    }
    str = malloc(count + 1);
    if (str == NULL)
        return(NULL);
    i = 0;
    while (count)
    {
        char character = (*ptr / divider) + '0';
        str[i] = character;
        *ptr = *ptr % divider;
        divider = divider / 10;
        i++;
        count--;
    }
    str[i] = '\0';
    return(str);
}
int main() {
    char *str;
    int number = 200435;
    str = handle_integer(&number);
    printf("%s\n", str);
    free(str);
    return(0);
}
