#include <unistd.h>
/**
* main - Prints the size of vcompiled and run on.
*
* Return: Always 1
**/
int main(void)
{
const char
*str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str, 59);
return (1);
}
