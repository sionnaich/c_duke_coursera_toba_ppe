#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str)
{
    if (str == NULL)
    {
        ; //NOOP
    }
    else
    {
        size_t n = strlen(str);
        char* copia = malloc((n * sizeof(char)) + 1);
        strcpy(copia, str);
        //char toba[n + 1] = strncpy(toba, str, n + 1); DA RUIM, geralmente n e uma boa ideia
        for (size_t i = 0; i < n; i++)
        {
            str[i] = copia[(n - 1) - i];
        }
        free(copia);
        copia = NULL;
    }
}

int main(void)
{
    char str0[] = "";
    char str1[] = "123";
    char str2[] = "abcd";
    char str3[] = "Captain's log, Stardate 42523.7";
    char str4[] = "Hello, my name is Inigo Montoya.";
    char str5[] = "You can be my wingman anyday!";
    char str6[] = "Executor Selendis! Unleash the full power of your forces! There may be no tomorrow!";
    char* array[] = { str0, str1, str2, str3, str4, str5, str6 };
    for (int i = 0; i < 7; i++) {
        reverse(array[i]);
        printf("%s\n", array[i]);
    }
    return EXIT_SUCCESS;
}
