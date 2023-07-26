#include "main.h"

/**
* leet - encodes a string to 1337
* @str: pointer to the string
*
* Return: the encoded string
*
*/

char *leet(char *str)
{
char *ptr = str;
/* Initialize the leet_map array with zeros */
int leet_map[256] = {0};

/* Create a mapping of characters to their leet counterparts */
leet_map[(unsigned char)'a'] = leet_map[(unsigned char)'A'] = '4';
leet_map[(unsigned char)'e'] = leet_map[(unsigned char)'E'] = '3';
leet_map[(unsigned char)'o'] = leet_map[(unsigned char)'O'] = '0';
leet_map[(unsigned char)'t'] = leet_map[(unsigned char)'T'] = '7';
leet_map[(unsigned char)'l'] = leet_map[(unsigned char)'L'] = '1';

/* Loop through the string and encode the characters based on the leet_map */
while (*ptr != '\0')
{
if (leet_map[(unsigned char)*ptr] != 0)
{
*ptr = leet_map[(unsigned char)*ptr];
}
ptr++;
}

return (str);
}
