#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    printf("%d\n", _strcmp("abc", "abc")); /* expects 0 */
    printf("%d\n", _strcmp("abc", "abcd")); /* expects -15 */
    printf("%d\n", _strcmp("abcd", "abc")); /* expects 15 */
    return (0);
}
