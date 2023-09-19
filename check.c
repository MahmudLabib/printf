#include "main.h"

/**
 * check - check for which function to be executed
 * @next_char: character to match with
 * @d: the next_char position
 * 
 * Return: if matched return funciton that matched, or NULL if not
*/
int (*check(const char *next_char, int d))(va_list)
{
        int i;
        specifier_t aformat[] = {
                {"c", _print_character},
                {"s", _print_string},
                {"d", _print_decimal},
                {"i", _print_integer},
		{"b", _print_binary},
                {NULL, NULL}
        };
        
        for (i = 0; aformat[i].flag != NULL; i++)
        {
                if (aformat[i].flag[0] == next_char[d])
                {
                        return (aformat[i].fPointer);
                }
        }
        return (NULL);
}
