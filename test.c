#include <stdio.h>
int main(void)
{
char s [256], *p;
p = s;
while((*p++=getchar ()) != "\n");
*p = '\0'; /* добавление нулевого символа */
printf(s);
return 0;
}