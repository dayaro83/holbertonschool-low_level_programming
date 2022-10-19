#include "main.h"
#include <string.h>
/**
*strlen -> function calculate the number of characters in the string
*@s:string pointer to passed this fuction
*Return : returns legth of the string
*/
int strlen(char *s)
{
int len;

for (; *s != '\0' ; s++)
{
len + = 1;
}
return (strlen(s));
}
