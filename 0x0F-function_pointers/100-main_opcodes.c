#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument values
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int num_bytes, i;
unsigned char *main_addr = (unsigned char *)main; // Convert function pointer to char pointer

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

for (i = 0; i < num_bytes - 1; i++)
{
printf("%02x ", main_addr[i]);
}
printf("%02x\n", main_addr[i]);

return (0);
}
